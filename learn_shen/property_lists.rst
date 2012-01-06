.. _property_lists:

Property Lists
==============

Properly speaking property lists in Shen are *property vectors*, since vectors are used to store the information. However usage from Common Lisp has made the term 'property list' part of the common currency of computing.

The function ``(put object pointer value)`` creates a pointer from the object to the value which can be retrieved by ``(get object pointer)``. ``put`` is a destructive operation that uses hashing into a vector. Both ``put`` and get ``accept``, as an optional final argument, a vector into which all pointers are created.

.. code-block:: shen

    (11-) (put mark sex male)
    male
  
    (12-) (get mark sex)
    male
  
    (13-) (get mark height)
    value not found

.. rubric:: Detailed Reference

- `Shen Official Standard`_

.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Property%20Lists%20and%20Hashing
