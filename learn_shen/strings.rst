.. _strings:

Strings
=======

Strings begin and end with double quotes. Strings can be created from atoms (strings, symbols and numbers) by the str function.

The fast 2-place concatenation operator for strings is ``cn``. ``@s`` is a polyadic concatenation operator. ``(pos s n)`` selects the nth unit string from ``s`` starting from zero. ``tlstr`` returns all but the first element of a string.

.. code-block:: shen

    (1-) "hello world"
    "hello world"
  
    (2-) (pos "hello world" 6)
    "w"
  
    (3-) (@s "1" "2" "3")
    "123"
  
    (4-) (tlstr "123")
    "23"

Shen allows pattern matching over strings. See the entry in documentation on **functions: pattern matching**.

.. rubric:: Further Reading

- `Shen Official Standard`_

.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Strings
