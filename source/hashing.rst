.. _hashing:

Hashing
=======

``(hash a n)``, where ``a`` is any expression and ``n`` is a natural number, will give the hash value of a within the interval 0 to ``n``. ::

  (27-) (hash abc 10)
  4

  (28-) (hash abc 100)
  94

  (29-) (hash abc 1000)
  294

  (30-) (hash abc 10000)
  294

.. rubric:: Further reading

- `Shen Official Standard`_

.. _Shen Official Standard: http://www.shenlanguage.org/Documentation/shendoc.htm#Property%20Lists%20and%20Hashing
