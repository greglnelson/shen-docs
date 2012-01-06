.. _assignments:

Assignments
===========

**Global assignments** are made using ``set`` and the values of the variables recovered using ``value``.

.. code-block:: shen

    (1-) (set dozen 6)
    6

    (2-) dozen
    dozen

    (3-) (value dozen)
    6

    (4-) (bound? dozen)
    true


**Local assignments** are made using ``let``. ``let`` takes three arguments, a variable ``v``, an expression ``e``:sub:`1` and an expression ``e``:sub:`2` and binds ``v`` to the normal form of ``e``:sub:`1` in the evaluation of ``e``:sub:`1`.

``let`` is polyadic; ``(let a b b c d)`` is short for ``(let a b (let b c d))``.

.. code-block:: shen

    (5-) (let X 6 Y 5 (* X Y))
    30

See also *property lists*.

.. rubric:: Detailed Reference

- `FPQi p77-78`_
- `FPQi p97-98`_

.. _FPQi p77-78: http://www.shenlanguage.org/Documentation/Reference/FPQi/page077.htm
.. _FPQi p97-98: http://www.shenlanguage.org/Documentation/Reference/FPQi/page097.htm
