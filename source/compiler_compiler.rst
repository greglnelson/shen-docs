.. _compiler_compiler:

Compiler-compiler
=================

Shen-YACC is a compiler-compiler based on earlier work by Dr Gyorgy Lajos on his METALISP Ph.D. project which was in turn based on even earlier work by Alexander Birman on `TDPL parsing`_. The syntax of YACC is based on the `BNF notation`_ of Backus. Used at its most basic level, YACC is a generator for recognisors based on grammars. More usefully, YACC can be used to develop efficient compilers for programming languages and transducers for natural language processing.


YACC as a Recognisor Generator
------------------------------

Consider the following grammar. ::

    <sent> := <np> <vp>
    <np> := <det> <n> | <name>
    <det> := the | a
    <n> := cat | dog
    <name> := Bill | Ben
    <vp> := <vtrans> <np>
    <vtrans> := likes | chases

In YACC, this grammar would be represented as ::
    
    Shen 2010, copyright (C) 2010 Mark Tarver
    www.lambdassociates.org, version 1.8
    running under Common Lisp, implementation: CLisp 2.49
    port 1.0 ported by Mark Tarver
    
    
    (0-)(defcc <sent>
    <np> <vp>;)
    warning: <np> <vp> has no semantics.
    <sent>
    
    (1-)(defcc <det>
    the; a;)
    warning: the has no semantics.
    warning: a has no semantics.
    <det>
    
    (2-) (defcc <np>
    <det> <n>;
    <name>;)
    warning: <det> <n> has no semantics.
    warning: <name> has no semantics.
    <np>
    
    (3-)(defcc <n>
    cat; dog;)
    warning: cat has no semantics.
    warning: dog has no semantics.
    <n>
    
    (4-) (defcc <name>
    Bill; Ben;)
    warning: Bill has no semantics.
    warning: Ben has no semantics.
    
    The following variables are free in <name>: Bill
    
    The following variables are free in <name>: Ben
    <name>
    
    (5-) (defcc <vp>
    <vtrans> <np>;)
    warning: <vtrans> <np> has no semantics.
    <vp>
    
    (6-) (defcc <vtrans>
    likes; chases;)
    warning: likes has no semantics.
    warning: chases has no semantics.
    <vtrans>

If *semantic actions* (i.e instructions on how to process the input) are not included, YACC warns the user and inserts a default semantic action. This default action appends non-terminals and conses terminals to form an output. The spacing is left to the judgement of the programmer, but ;s separate rules. Unlike Shen, Shen-YACC gives no significance to symbols beginning in uppercase (i.e. *Bill* is just a symbol like *cat*, and not a variable). When one of these definitions (e.g. for ``<sent>``) is entered to the top level, it is compiled into Common Lisp by YACC with the message *warning; no semantics in <np> <vp>*.

The compiler generated acts as a recogniser for sentences of the language characterised by this grammar. If it is not a sentence of the language, then the failure object (``fail``) is returned. If the input to the compiler belongs to this language, then (``fail``) is not returned by the compiler and generally the program behaves as an identity function. The compiler is invoked by the higher-order function compile, that receives the name of a YACC function and parses its second input by that function. ::
    
    (10-) (compile <sent> [the cat likes the dog])
    [the cat likes the dog]
    
    (11-) (compile <sent> [the cat likes the canary])
    fail!
    
    (12-) (compile <vp> [chases the cat])
    [chases the cat]

Note that names of YACC functions should always be enclosed in angles. YACC is sensitive to left-recursion which will force an infinite regress. YACC code is not type checked, but the code can be tracked just like regular code. Lists are constructed in YACC using ``[…]`` or cons or list or any of the conventional methods. Unlike Shen, the constructor | cannot be used in the syntax of an expansion (i.e. to the left of ``:=``), though it can be used to the right (in a semantic action) to perform consing. However ``[…]`` can be used to the left of ``:=``. ``<bcs>``, below, recognises the inputs belonging to [ b :sub:`m` ][ c :sub:`n` ]. ::
    
    (16-) (defcc <bcs>
    [<bs>] [<cs>];)
    warning: [cons <bs> []] [cons <cs> []] has no semantics.
    <bcs>
    
    (17-)
    (defcc <bs>
    b <bs>;
    b;)
    warning: b <bs> has no semantics.
    warning: b has no semantics.
    <bs>
    
    (18-)
    (defcc <cs>
    c <cs>;
    c;)
    warning: c <cs> has no semantics.
    warning: c has no semantics.
    <cs>
    
    (19-) (compile <bcs> [[b b b] [c c]])
    [[[b b b]] [[c c]]]

Semantic Actions in YACC
------------------------
    
Semantic actions are attached to grammar rules by following each rule by a ``:=``. This YACC definition receives a list of *as* and changes them to *bs*. ::
    
    (20-) (defcc <as>
    a <as> := [b | <as>];
    a := [b];)
    <as>
    
    (21-) (compile <as> [a a a a a])
    [b b b b b]
    The first rule says that any input of the form a <as> is to be translated into an output consisting of b consed to the translation of <as>. The syntax of <as> requires that the input be a non-empty list of as. So (compile <as> [a a a]) gives [b b b]. The second rule is the base case.
    
    As in Shen, round brackets signify function applications and square ones form lists. The following reformulation is an example.
    
    
    (24-) (defcc <sent>
    <np> <vp> := (question <np> <vp>);)
    <sent>
    
    (25-) (define question
    NP VP -> (append [Is it true that] NP VP [?]))
    
    The following variables are free in question: Is
    question
    
    (26-) (compile <sent> [the cat likes the dog])
    [Is it true that the cat likes the dog ?]

.. rubric:: Further Reading

- `FPQi p404 and after`_

.. _TDPL parsing: http://en.wikipedia.org/wiki/Top-down_parsing_language
.. _BNF notation: http://en.wikipedia.org/wiki/Backus%C3%A2%E2%82%AC%E2%80%9CNaur_Form
.. _FPQi p404 and after: http://www.shenlanguage.org/Documentation/Reference/FPQi/page404.htm
