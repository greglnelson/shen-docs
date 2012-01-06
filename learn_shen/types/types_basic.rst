.. _types_basic:

Basic
=====

The basic datatypes and types of Shen are 

* symbols
* strings
* booleans
* numbers
* lists
* tuples
* vectors
* lazy objects
* abstractions

Typing ``(tc +)`` to the REPL activates type checking. Here are a few examples.

.. code-block:: shen

    (0-) (tc +)
    true
    (1+) a
    a : symbol
  
    (2+) "hello world"
    "hello world" : string
  
    (3+) (= 4 5)
    false : boolean
  
    (4+) (* 2.3 2)
    4.6 : number
  
    (5+) [1 2 3]
    [1 2 3] : (list number)
  
    (6+) (@v 1 2 3 <>)
    <1 2 3> : (vector number)
  
    (7+) (@p 1 2 a)
    (@p 1 (@p 2 a)) : (number * (number * symbol))
  
    (8+) (@s "10" " green" " bottles")
    "10 green bottles" : string
  
    (9+) (freeze (* 7 8))
    #<FUNCTION :LAMBDA NIL (multiply 7 8)> : (lazy number)
  
    (10 +) (* 7)
    #<FUNCTION :LAMBDA (#:Y18379) (multiply #:Y18378 #:Y18379)> : (number --> number)
