.. _repl:

REPL
========

Shen is based on the REPL (read-evaluate-print-loop) common to functional programming languages. The input is read, evaluated to an expression called a **normal form** (which is the answer or solution to the input) and this solution is printed.

The REPL numbers every input. Typing ``!n`` where ``n`` is a number repeats that input. ``!s`` where ``s`` is a symbol repeats the evaluation of the last expression headed by the symbol ``s``. ``!!`` repeats the last input.

``%n`` works likewise (``%%`` is not used though) except the expression is printed and not evaluated. ``%s`` where s is a symbol prints all past expressions headed the symbol s. ``%`` on its own prints all past expressions typed to the top level. ::

  Shen 2010, copyright (C) 2010 Mark Tarver
  www.lambdassociates.org, version 1.8
  running under Common Lisp, implementation: CLisp 2.49
  port 1.0 ported by Mark Tarver


  (0-) (* 78 34)
  2652

  (1-) !!
  (* 78 34)
  2652

  (2-) !1
  (* 78 34)
  2652

  (3-) (* 5 6)
  30

  (4-) !*
  (* 5 6)
  30

  (5-) %*
  0. (* 78 34)
  1. (* 78 34)
  2. (* 78 34)
  3. (* 5 6)
  4. (* 5 6)


  (5-) (+ 7 8)
  15

  (6-) %+
  5. (+ 7 8)

.. rubric:: Further reading

- `FPQi p38 and after`_

.. _FPQi p38 and after: http://shenlanguage.org/Documentation/Reference/FPQi/page038.htm

