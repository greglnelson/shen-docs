.. _backtracking:

Backtracking
============

Backtracking is invoked in a Shen function ``f`` by using <- in place of ->. The effect is that the expression after the <- is returned only if it does not evaluate to the failure object (``fail``). If (``fail``) is returned; then the next rule in ``f`` is applied. ::

    (17-) (define foo
    X <- (if (integer? X) 0 (fail))
    X -> X)
    foo
    
    (18-) (foo 5)
    0

    (19-) (foo a)
    a

.. rubric:: Detailed Reference

- `FPQi p106 and after`_

.. _FPQi p106 and after: http://www.shenlanguage.org/Documentation/Reference/FPQi/page106.htm
