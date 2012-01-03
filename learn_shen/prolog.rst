.. _prolog:

Prolog
======

Shen has a Prolog notation consistent with the rest of Shen which uses ``defprolog``. Here are the ``member``, ``reverse`` and ``append`` functions in Shen Prolog. ::

  (48-) (defprolog member
  X [X | _] <--;
  X [_ | Y] <-- (member X Y);)
  member

  (49-)(defprolog rev
  [] [] <--;
  [X | Y] Z <-- (rev Y W) (conc W [X] Z);)
  rev

  (50-)(defprolog conc
  [] X X <--;
  [X | Y] Z [X | W] <-- (conc Y Z W);)
  conc

  (51-) (prolog? (member 1 [1 2]))
  true

  (52-) (prolog? (member 0 [1 2]))
  false

  (53-) (prolog? (member X [1 2]))
  true

  (54-) (prolog? (member X [1 2]) (return X))
  1

  (55-) (prolog? (rev [1 2] X) (return X))
  [2 1]

.. rubric:: Further Reading

- `Shen Official Standard`_

.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Prolog

