.. _macros:

Macros
======

Macros allow the programmer to define his own syntax by programming the reader.

Programs are read into the Shen reader as list structures, just as in Lisp. By manipulating these list structures, we can program in our own syntax.

For example, suppose we have loaded a 2-place function ``log`` (note: this is not in Shen but in the maths library) and wish to create a version of ``log`` that takes the second argument as optional. If the optional argument is omitted, we want the log function to work to the base 10.

To create the illusion of polyadicity, we use our two place ``log`` function and write a macro to insert the second argument if it is missing.

.. code-block:: shen

    (0-) (log 100)
    #<FUNCTION :LAMBDA (#:Y191) (log #:Y190 #:Y191)> {the second argument is missing, so the result is a partial application}
  
    (1-) (defmacro logmacro
    [log N] -> [log N 10])
    macro
    logmacro
  
    (2-) (log 100)
    2

Note a macro has to be read in **and** compiled before it is used.
