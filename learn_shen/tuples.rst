.. _tuples:

Tuples
======

Shen supports tuples; the function ``(@p a b)`` returns the pair of ``a`` and  ``b``. ``@p`` is polyadic and associates to the right; ``(@p a b c)`` is shorthand for ``(@p a (@p b c))``. ``fst`` and snd ``select`` the first and second elements of a pair. The function ``tuple?`` recognises all and only tuples.

.. code-block:: shen

    (1-) (@p (+ 1 1) a)
    (@p 2 a)
  
    (2-) (fst (@p a b))
    a
  
    (3-) (snd (@p a b))
    b
  
    (4+) (tc +)
    true
  
    (5+) (@p (+ 1 1) a)
    (@p 2 a) : (number * symbol)
  
    (6+) (@p true 7 "w")
    (@p true (@p 7 "w")) : (boolean * (number * string))

.. rubric:: Further reading

- `Shen Official Standard`_
- `FPQi p148`_

.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Tuples
.. _FPQi p148: http://shenlanguage.org/Documentation/Reference/FPQi/page148.htm
