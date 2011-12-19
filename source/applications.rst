.. _applications:

Applications
============

Applications in Shen are written in prefix form in the manner of Lisp. `Partial applications`_ are supported for nearly all functions and evaluate within Shen to `closures`_. The mode of evaluation is `applicative order evaluation`_ and is strict [#f1]_. ::

    (1-) (+ (* 7 8) 2)
    58

    (2-) (* 7)
    #<FUNCTION :LAMBDA (#:Y18379) (multiply #:Y18378 #:Y18379)>

The exact form in which the closure is printed is platform dependent.

.. rubric:: Detailed Reference

- `FPQi p39-40`_

.. rubric:: Footnotes

.. [#f1] Except in the case of the following functions; *if*, *and*, *or*, *cases*, *freeze*, *let*.

.. _closures: http://en.wikipedia.org/wiki/Closure_(computer_science)
.. _partial applications: http://en.wikipedia.org/wiki/Partial_application
.. _applicative order evaluation: http://en.wikipedia.org/wiki/Evaluation_strategy#Applicative_order
.. _FPQi p39-40: http://www.shenlanguage.org/Documentation/Reference/FPQi/page039.htm
