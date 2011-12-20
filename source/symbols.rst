.. symbols_

Symbols
=======

Symbols are self-evaluating in Shen; the symbol ``a`` evaluates to ``a``, ``abc`` to ``abc``. Symbols can be derived from interning suitable strings. ::

  (1-) abc
  abc

  (2-) abc'
  abc'

  (3-) (intern "cheese")
  cheese

.. rubric:: Further reading

- `Shen Official Standard`_

.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#The\ Syntax\ of\ Symbols
