.. _booleans:

Booleans
========

``true`` and ``false`` are booleans. The basic boolean operators are ``if``, ``and``, ``or``, ``not`` and ``cases``.

``(if a b c)`` evaluates to ``b`` if ``a`` is true and to ``c`` if ``a`` is false. ``(and a b)`` evaluates to true if ``a`` and ``b`` evaluate to ``true``; and ``(or a b)`` evaluates to ``true`` if either ``a`` or ``b`` evaluate to ``true``. ``(not a)`` evaluates to ``true`` just if ``a`` evaluates to ``false``.

``and`` and ``or`` are polyadic and ``(and a b c)``, ``(or a b c)`` etc. are legal.

``(cases a b c d true error!)`` is shorthand for ``(if a b (if c d error!))``. If no cases apply an error is returned.

``if``, ``and``, ``or`` and ``cases`` are non-strict in evaluation. ::

    (1-) (if (= 6 (+ 4 2)) yes no)
    yes
    (2-) (and (number? 6) (string? "3"))
    true
    
    (3-) (or (= 8 8) 9)
    true {9 is not evaluated}
    
    (4-) (or 9 (= 8 8))
    9 is not a boolean

.. rubric:: Detailed Reference

- `FPQi p44-45`_

.. _FPQi p44-45: http://www.shenlanguage.org/Documentation/Reference/FPQi/page044.htm
