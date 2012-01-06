.. _functions_higher_order:

Higher Order Functions
======================

Shen supports higher-order functions.
In all ports of Shen running under variants of Lisp, the above will work.

.. code-block:: shen

    (0-) (define foldl 
    F Z [] -> Z
    F Z [X | Xs] -> (foldl F (F Z X) Xs))
    foldl
    (1-) (foldl + 0 [1 2 3])
    6
    
    (2+) (foldl (function +) 0 [1 2 3])
    6

Under non-Lisp platforms, where Lisp symbols are not supported, it is wise to use 'function' to indicate that a symbol is being used as an argument to denote a function

.. rubric:: Further Reading

- `FPQi page 83 and after`_
- `Shen Official Standard`_

.. _FPQi page 83 and after: http://www.shenlanguage.org/Documentation/Functions/Reference/FPQi/page083.htm
.. _Shen Official Standard: http://www.shenlanguage.org/Documentation/Functions/shendoc.htm#The%20Semantics%20of%20Symbols%20in%20Shen%20and%20KLambda
