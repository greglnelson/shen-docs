.. _sequent_calculus:

Sequent calculus
================

In Shen, datatypes are formalised in a series of (single conclusion) `sequent calculus`_ rules. If we want to introduce a new type t, then we have to write down a series of deduction rules describing the conditions under which an object x can be proved to be an inhabitant of t.
For clarity, these rules are organised into datatypes usually named after the type defined. For instance, we want to create a type colour in which red, yellow and green are colours. In sequent format, we write: ::

  ____________
  red : colour; 

  ___________
  yellow : colour; 
  
  ____________
  green : colour;

In Shen ... ::

  (20+) (datatype colour

  ____________
  yellow : colour;

  __________
  red : colour;

  ___________
  green : colour;)
  colour

  (21+) red
  red : symbol

  (22+) red : colour
  red : colour

  (23+) blue : colour
  type error

The term red is now overloaded - it is both a symbol and a colour. Shen plumps for the base type first when overloading is present. 

The use of 3 deduction rules is otiose - only one is needed if a *side condition* is placed before the rule. A side condition is signalled by the use of *if* , followed by some boolean expression, or *let* followed by a variable and an expression. ::

  (24+) (datatype colour
  
  if (element? X [red yellow green])
  __________________________________
  X : colour;)
  colour

Let's suppose we were writing a card game and we want to use lists like [ace spades] [10 hearts] [5 diamonds] [jack clubs] as cards. If we were to enter [5 diamonds] to Shen it would come back with a type error. So we want to define a type card which is the type of all cards. A card is a 2-element list; the first element being a rank and the second a suit. ::

  (25+) (datatype rank
  
  if (element? X [ace 2 3 4 5 6 7 8 9 10 jack queen king])
  ________
  X : rank;)
  rank
  (28+) (datatype suit

  if (element? Suit [spades hearts diamonds clubs])
  _________
  Suit : suit;)
  suit

  (29+) (datatype card

  Rank : rank; Suit : suit;
  _________________
  [Rank Suit] : card;

  Rank : rank, Suit : suit >> P;
  _____________________
  [Rank Suit] : card >> P;)
  card

The first rule says that a two-element list can be proved to be of the type *card* provided the first and second elements can be proved to be a *rank* and a *suit* respectively. The second rule says that given any proof in which it is assumed a two element list is a card, we can replace this assumption by the assumptions that the first and second elements are a *rank* and a *suit*. We need both rules to complete the identification of cards with pairs of ranks and suits f we do not use *synonyms* (see left). 

Shen permits a shorthand for expressing this type; ::

  (30+) (datatype card

  Rank : rank; Suit : suit;
  ==================
  [Rank Suit] : card;)

Note that semi-colons separate individual goals to be proved; >> is the Shen turnstile |- and commas are used to separate individual formulae in the list of assumptions to the left of >>. Here are some sample inputs. ::

  (21+) [5 spades]
  [5 spades] : card

  (22+) [king hearts]
  [king hearts] : (list symbol)

  (23+) [king hearts] : card
  [king hearts] : card

  (24+) (define get-suit
  {card --> suit}
  [Rank Suit] -> Suit)
  get-suit : card -> suit


.. rubric:: Further reading

- `FPQi p114 and after`_
- `FPQi p157 and after`_

.. _FPQi p114 and after: http://shenlanguage.org/Documentation/Reference/FPQi/page114.htm
.. _FPQi p157 and after: http://shenlanguage.org/Documentation/Reference/FPQi/page157.htm

.. _sequent calculus: http://en.wikipedia.org/wiki/Sequent_calculus
