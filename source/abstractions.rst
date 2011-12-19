.. _abstractions:

Abstractions
============

Lambda functions in Shen can be written in classical form. ``(lambda X X)`` is the identity function; also written ``(/. X X)``. The latter notation allows a shorthand; 
``(lambda X (lambda Y Y))`` can be written ``(/. X Y Y)``.

Abstractions evaluate within Shen to `closures`_; as do `partial applications`_. ::

    (1-) (/. X X)
    #<FUNCTION :LAMBDA (X) X>
    
    (2-) (* 7)
    #<FUNCTION :LAMBDA (#:Y18379) (multiply #:Y18378 #:Y18379)>

The exact form in which the closure is printed is platform dependent.

.. rubric:: Detailed Reference

- `FPQi p84-85`_

.. _closures: http://en.wikipedia.org/wiki/Closure_(computer_science)
.. _partial applications: http://en.wikipedia.org/wiki/Partial_application
.. _FPQi p84-85: http://www.shenlanguage.org/Documentation/Reference/FPQi/page084.htm
