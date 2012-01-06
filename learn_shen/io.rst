.. _io:

I/O
============

The function ``pr`` is the primitive print command receiving a string and printing it to the terminal and returning it as a value. ``pr`` is polyadic, taking a second optional argument which is the sink stream to which it prints; if the argument is not given the stream defaults to the standard output.

The function ``output`` is polyadic and permits embedded directives in its first argument. Directive are either ~A, ~S, ~R, ~%.

1. ~A is a directive to print the corresponding argument as part of the string ignoring any double quotes.
2. ~S is a directive to print the corresponding argument as part of the string, not ignoring double quotes.
3. ~R is a directive to print the corresponding argument as part of the string, printing list structures with round brackets.
4. ~% is a directive to print a new line.

The function ``make-string`` works as ``output`` except the string is returned without being printed. ``nl`` as a 0 place function prints a new line and returns 0. Followed by a natural number ``n``, ``nl`` prints ``n`` new lines and returns zero.

The 0 place function ``input`` receives an input an evaluates it. ``lineread`` receives ``n`` inputs and places them in a list. ``input+`` is a type secure version of input. 

.. code-block:: shen

    (0-) (output "a string~%")
    a string
    "a string
    "
  
    (1-) (nl 1)
  
    0
  
    (2-) (lineread)
    1 2 3
    [1 2 3]
  
    (3-) (pr "hello world")
    hello world"hello world"
  
    (4-) (output "hello world~%")
    hello world
    "hello world
    "
  
    (5-) (output "~A says, hello world~%" "Fred")
    Fred says, hello world
    "Fred says, hello world
    "
  
    (6-) (output "~S says, hello world~%" "Fred")
    "Fred" says, hello world
    "\"Fred\" says, hello world
    "
  
    (7-) (output "~S say, hello world~%" [Bill and Ben])
    [Bill and Ben] say, hello world
    "[Bill and Ben] say, hello world
    "
  
    (8-) (output "~R say, hello world~%" [Bill and Ben])
    (Bill and Ben) say, hello world
    "(Bill and Ben) say, hello world
    "
  
    (9-) (input)
    (* 7 8)
    56
  
    (10-) (input+ : number)
    a
    input is not of type number: please re-enter (* 6 9)
    54

.. rubric:: Detailed Reference 

- `Shen Official Standard`_
- `FPQi page 41`_

.. _Shen Official Standard: http://www.shenlanguage.org/Documentation/shendoc.htm#Priniting
.. _FPQi page 41: http://www.shenlanguage.org/Documentation/Reference/FPQi/page041.htm


