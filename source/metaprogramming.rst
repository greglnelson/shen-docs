.. _metaprogramming:

Metaprogramming
===============

Shen supports metaprogramming just like other members of the Lisp family. The ``eval`` function in Shen drives the metaprogramming.

The rule for eval is: ``(eval e) = e'`` where ``e'`` results from ``e`` by the replacement of the square brackets in e by round ones.

Hence ``eval`` takes an object and evaluates it as an expression. ::
  (1-) (eval 2)
  2

  (2-) (eval [+ 5 6])
  11

  (3-) (eval [f a])
  EVAL: undefined function f

Every Shen function can be written as a list structure. ``[X | Y]`` is just sugar for ``(cons X Y)``. ::

  (41-) (eval [define factorial
  0 -> 1
  X -> [* X [factorial [- X 1]]]])
  factorial

  (42-) (factorial 6)
  720

  (43-) (eval [define rev
  [] -> []
  [cons X Y] -> [append [rev Y] [cons X []]]])
  rev

  (44-) (rev [1 2 3])
  [3 2 1]


.. rubric:: Further Reading

- `FPQi p131 and after`_

.. _FPQi p131 and after: http://shenlanguage.org/Documentation/Reference/FPQi/page131.htm
