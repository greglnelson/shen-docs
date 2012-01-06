.. _lazy_eval:

Lazy evaluation
===============

Shen provides on-demand type secure `lazy evaluation`_; the function ``freeze`` freezes a computation returning a lazy object which can be evaluated at will by the function ``thaw``.

.. code-block:: shen

    (2-) (freeze (factorial 8))
    #<FUNCTION :LAMBDA NIL (factorial 8)>
  
    (3-) (thaw (freeze (factorial 8)))
    40320

.. rubric:: Detailed Reference

- `FPQi p153-154`_

.. _FPQi p153-154: http://www.shenlanguage.org/Documentation/Reference/FPQi/page153.htm

.. _lazy evaluation: http://en.wikipedia.org/wiki/Lazy_evaluation
