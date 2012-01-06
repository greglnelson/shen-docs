.. _lists:

Lists
=====

Lists in Shen are produced by placing the items in square brackets. The list of the numbers 1, 2 and 3 is just ``[1 2 3]``. ``head`` and ``tail`` take the head and tail of a list.

.. code-block:: shen

    (0-) [1 (+ 1 1) (+ 1 2)]
    [1 2 3]
  
    (1-) (head [1 2 3])
    1
  
    (2-) (tail [1 2 3])
    [2 3]

``cons`` adds an element to the front of a list. Shen includes an infix ``|`` which works in the manner of Prolog; ``[1 2 | [3]]`` conses 1 and 2 to the list ``[3]``. If the second argument to cons is not a list then the result is a `dotted pair`_ in Lisp jargon.

.. code-block:: shen

    (3-) (cons 1 [2 3])
    [1 2 3]
  
    (4-) [1 2 | [3]]
    [1 2 3]
  
    (5-) [1 | (+ 1 1)]
    [1 | 2]

.. rubric:: Further Reading

- `FPQi p 70 and after`_
- `Shen Official Standard`_

.. _dotted pair: http://en.wikipedia.org/wiki/Cons
.. _FPQi p 70 and after: http://shenlanguage.org/Documentation/Reference/FPQi/page070.htm
.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Lists 
