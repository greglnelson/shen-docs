.. _vectors:

Vectors
=======

``(vector n)`` creates a (standard) vector with n element numbered from 1 to n. For standard vectors the zeroth address holds an integer that gives the size of the vector.
The shortest standard vector is created by expression ``(vector 0)`` which creates a standard vector whose zeroth address contains the object zero. This called the **empty vector** and Shen permits the user to write ``<>`` as shorthand for the empty vector.

The polyadic ``@v`` adds n elements in order to a vector, copying it and creating a new vector.

``(<-vector v n) (n >= 1)`` accesses the nth element of vector ``v``. The function limit accesses the 0th element of a vector ``v``.

``(vector-> v n x)`` destructively modifies ``v`` by placing ``x`` in the nth address of ``v``.

A 2-dimensional array is simply a vector of vectors.

The non-destructive operation ``(@v x v)`` creates a new vector ``v'`` whose tail is the same as ``v`` and whose head is ``x``.

.. code-block:: shen

    (1-) (set *myvector* (@v 1 <>))
    <1> {create a vector with 1 element}
  
    (2-) (limit (value *myvector*))
    1
  
    (3-) (set *myvector* (@v 0 (value *myvector*)))
    <0 1>
  
    (4-) (limit (value *myvector*))
    2
  
    (5-) (@v -1 (value *myvector*))
    <-1 0 1>
  
    (6-) (limit (value *myvector*))
    2
  
    (7-) (<-vector (value *myvector*) 2)
    1
  
    (8-) (vector-> (value *myvector*) 2 a)
    <0 a>
  
    (9-)(value *myvector*)
    <0 a>

See also *pattern matching* in the fast reference.

- `Shen official standard`_

.. _Shen official standard: http://shenlanguage.org/Documentation/shendoc.htm#Vectors
