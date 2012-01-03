.. _exceptions:

Exceptions
==========

The polyadic function ``error`` has the same formating features as ``output`` (see *printing* in fast reference) and uses a string to raise an error as an `exception`_.

The 2-place function ``trap-error`` takes an expression ``e`` as its first argument and a function ``f`` as its second and evaluates ``e``. If an exception is raised from ``e``, the exception is sent as an argument to ``f``.

The function ``error-to-string`` converts any exception to the string from which it was derived. ::

    (3-) (error "this is an error message, followed by a new line~%")
    this is an error message, followed by a new line
    (4-) (trap-error (error "this is an error message, followed by a new line~%") (/. E "I trapped the error."))
    "I trapped the error."
    
    (5-) (trap-error (error "this is an error message, followed by a new line~%") 
    (/. E (error-to-string E)))
    "this is an error message, followed by a new line
    "

.. rubric:: Detailed Reference

- `Shen Official Standard`_

.. _exception: http://en.wikipedia.org/wiki/Exception_handling
.. _Shen Official Standard: http://www.shenlanguage.org/Documentation/shendoc.htm#Error%20Handling
