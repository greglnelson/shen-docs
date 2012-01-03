.. _shen_in_15mins:

Shen in 15 minutes
==================

The Shen top level is a read-evaluate-print loop as in all functional languages. When you start it up, you get something this (depending on release and platform).

.. code-block:: shen

    Shen 2010, copyright (C) 2010 Mark Tarver
    www.lambdassociates.org, version 1.8
    running under Common Lisp, implementation: CLisp 2.49
    port 1.0 ported by Mark Tarver
    
    
    (0-)

Unlike Lisp the quote (') is not used. Entering ``hello`` returns ``hello``, so symbols are implicitly quoted.

.. code-block:: shen

    Shen 2010, copyright (C) 2010 Mark Tarver
    www.lambdassociates.org, version 1.8
    running under Common Lisp, implementation: CLisp 2.49
    port 1.0 ported by Mark Tarver
    
    
    (0-) hello
    hello

Each input is numbered starting with 0.

An input is repeated by typing ``!n`` where **n** is a natural number. Shen will print the nth input of the session and evaluate it. Typing ``!s`` where **s** is any series of symbols, will cause Shen to print and then evaluate the last input whose main function symbol begins with **s**. ``%`` works as ``!`` except that the previous input(s) are printed off without being evaluated.

.. code-block:: shen

    Shen 2010, copyright (C) 2010 Mark Tarver
    www.lambdassociates.org, version 1.8
    running under Common Lisp, implementation: CLisp 2.49
    port 1.0 ported by Mark Tarver
    
    
    (0-) hello
    hello
    
    (1-) (* 7 8)
    56
    
    (2-) !1
    (* 7 8)
    56
    
    (3-) !*
    (* 7 8)
    56
    
    (4-) %*
    1. (* 7 8)
    2. (* 7 8)
    3. (* 7 8)

Functions are applied in prefix form just like Lisp. Unlike Lisp, Shen is case-sensitive, so b and B are not treated as the same. ``=`` is the general equality relation (unlike Lisp where it is used for only numbers). Unlike Lisp, Shen uses true and false as booleans. ``^`` breaks off input.

.. code-block:: shen

    (4-) (and true false)
    false
    
    (5-) (or true false)
    true
    
    (6-) (not true)
    false
    
    (7-) (if true a b)
    a
    
    (8-) (= 1 1)
    true
    
    (9-) (= f ^
    line read aborted

Shen permits currying, and also partial applications, which both generate closures.

.. code-block:: shen

    (10-) ((* 7) 9)
    63
    
    (11-) (* 7)
    #<FUNCTION :LAMBDA (#:Y18390) (multiply #:Y18389 #:Y18390)>

In lambda calculus, the identity function is ``(λ x x)``. In Shen it is written ``(/. X X)``, and evaluates to a closure. ``(/. X Y X)`` is acceptable shorthand for ``(λ x (λ y x))``. In Shen an abstraction can always be used in place of a function.

.. code-block:: shen

    (12-) (/. X X)
    #<FUNCTION :LAMBDA (X) X>
    
    (13-) ((/. X X) 9)
    9
    
    (14-) ((/. X Y Y) 6 7)
    7
    (15-) ((/. X Y (* X Y)) 6 7)
    42

A list begins with a ``[`` and ends with a ``]``. Spaces seperate items. cons, head and tail are standard. Note that Shen includes an infix ``|`` that works as Prolog. ``[1 2 | [3]] = [1 2 3]``.

.. code-block:: shen

    (16-) [1 2 3]
    [1 2 3]
    
    (17-) (= [1 (+ 1 1) 3] [1 2 3])
    true
    
    (18-) (head [1])
    1
    
    (19-) (tail [1])
    []
    
    (20-) (cons 1 [])
    [1]
    
    (21-) [1 2 | [3]]
    [1 2 3]

Suppose we have to define a function f that, if it receives 1 returns 0 and if it returns 0 returns 1. In Shen this appears as a series of rewrite rules. If all rules fail an error is raised.

.. code-block:: shen

    (22-) (define f
    0 -> 1
    1 -> 0)
    f
    
    (23-) (f 0)
    1
    
    (24-) (f 1)
    0
    
    (25-) (f 2)
    partial function f;
    track f? (y/n)

Now lets look at an example using variables. We define ``factorial``, this requires a variable, which in Shen is any symbol beginning in uppercase.

.. code-block:: shen

    (26-) (define factorial
    0 -> 1
    X -> (* X (factorial (- X 1))))
    factorial
    
    (27-) (factorial 6)
    720

Here are two list processing functions in Shen; one that totals a list and the other that splits a lists into triples.

.. code-block:: shen

    (28-) (define total
    [] -> 0
    [X | Y] -> (+ X (total Y)))
    total
    
    (29-) (define triples
    [] -> []
    [W X Y | Z] -> [[W X Y] | (triples Z)])
    triples
    
    (30-) (total [12 45 28])
    85
    
    (31-) (triples [1 2 3 4 5 6])
    [[1 2 3] [4 5 6]]

Patterns can be non-left linear; repeated variables require equality. Shen supports guards.

.. code-block:: shen

    (32-) (define id
    X X -> true
    _ _ -> false)
    (33-) (id 4 4)
    true
    
    (34-) (define gter
    X Y -> X where (> X Y)
    X Y -> Y where (> Y X)
    _ _ -> ?)
    gter
    
    (35-) (gter 4 5)
    5
    
    (36-) (gter 14 5)
    14
    
    (37-) (gter 14 14)
    ?

Here is ``foldl`` in Shen. Note that if Shen is not running on a Lisp platform, then ``function`` may be needed to disambiguate those symbol arguments that denote functions.

.. code-block:: shen

    (38-) (define foldl
    F Z [] -> Z
    F Z [X | Y] -> (foldl F (F Z X) Y))
    foldl
    
    (39-) (foldl + 0 [1 2 3])
    6
    
    (40-) (foldl (function +) 0 [1 2 3])
    6

``load`` will load a Shen program. Shen uses a C++ convention for comments.

.. code-block:: shen

    (41-) \* Here is a comment *\ (load "factorial.shen")
    factorial
    0.05s
    loaded

So far Shen looks like an untyped language (e.g. like SASL). Actually Shen does have type checking, but you have to switch it on. ``(tc +)`` does it. The ``+`` shows that you are now working in a statically typed environment. Shen will typecheck everything that is loaded or entered into the image. Like ML, mixed lists will not now be accepted. ``(tc -)`` switches the typechecker back off.

.. code-block:: shen

    (42-) (tc +)
    true
    
    (43+) 123
    123 : number
    
    (44+) [1 a]
    type error
    
    
    (45+) (* 7)
    #<FUNCTION :LAMBDA (#:Y18594) (multiply #:Y18593 #:Y18594)> : (number --> number
    )
    
    (45+) [1 2 3]
    [1 2 3] : (list number)

The pair ``<1,2>`` is represented as ``(@p 1 2)`` in Shen. The functions ``fst`` and ``snd`` select the first and second elements of a pair. ``(@p 1 2 3)`` is just shorthand for ``(@p 1 (@p 2 3))``.

.. code-block:: shen

    (46+) (@p 1 2)
    (@p 1 2) : (number * number)
    
    (47+) (fst (@p 1 2))
    1 : number
    
    (48+) (snd (@p 1 2))
    2 : number
    
    (49+) (@p 1 2 3)
    (@p 1 (@p 2 3)) : (number * (number * number))

Shen is like Hope in requiring explicit types to be attached to functions. It supports polymorphism and variables are allowed in types. You can use ``@p`` in a pattern-directed manner in function definitions.

.. code-block:: shen

    (50+) (define total
    {(list number) --> number}
    [] -> 0
    [X | Y] -> (+ X (total Y)))
    total : ((list number) --> number)
    
    (51+) (define triples
    {(list A) --> (list (list A))}
    [] -> []
    [W X Y | Z] -> [[W X Y] | (triples Z)])
    triples : (list A) --> (list (list A))
    
    (52+) (define swap
    {(A * B) --> (B * A)}
    (@P X Y) -> (@p Y X))
    swap : ((A * B) --> (B * A))


.. highlights::
   
   ---- Here ends the 15 minute introduction ----
