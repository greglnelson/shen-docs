.. _functions_defining:

Defining Functions
==================

Function definitions have the form::

    (define <function name>
    <rules>)

or ::

    (define <function name>
    <signature>
    <rules>)

(See *Types (functions)* for more on this).

A function name is a symbol beginning in lowercase. Rules have the form

``<arguments> -> <result>``

or

``<arguments> -> <result> where <guard>``

``<-`` is used in place of ``->`` if backtracking is needed (see *fast reference; backtracking*).

Arguments can be any atom (string, symbol, number, boolean) or lists or vectors of such (see *Functions: pattern matching*). Variables are symbols beginning in uppercase. ::

    (0-) (define likes
    tom dick -> yes
    dick harry -> yes
    harry tom -> yes)
    likes

    (1-) (likes tom dick)
    yes

    (2-) (likes dick fred)
    partial function likes
    track likes? (y/n) n

    (3-) (define greater-or-equal
    X Y -> X where (> X Y)
    _ Y -> Y)

.. rubric:: Further Reading

- `FPQi p45 and onwards`_

.. _FPQi p45 and onwards: http://www.shenlanguage.org/Documentation/Reference/FPQi/page045.htm
