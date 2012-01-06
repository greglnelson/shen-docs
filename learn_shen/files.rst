.. _files:

Files
=====

The function ``load`` loads a file containing a Shen program using the pathname as a string. ``read-file`` reads the file using Shen syntax conventions. ``(write-to-file f a)`` writes the object ``a`` to the file ``f`` designated by a string, returning ``a``. ``read-file-as-bytelist`` reads the file as a list of 8 bit unsigned bytes.

All files are opened relative to the value for the home directory. The value of this global is changed by the ``cd`` function.

.. code-block:: shen

    (1-) (load "factorial.shen")
    factorial
    loaded
    (2-) (factorial 3)
    6
    
    (3-) (read-file "factorial.shen")
    [define factorial 0 -> 1 X -> [* X [factorial [- X 1]]]]
    
    (4-) (cd "My Workspace")
    "My workspace/"
    
    (5-) (load "factorial.shen")
    OPEN: File "My Workspace/factorial.shen" does not exist
    
    (6-) (cd "") {resets the home directory to default}
    ""
    
    (7-) (load "factorial.shen")
    factorial
    loaded

See fast reference on *streams*.

.. rubric:: Detailed Reference

- `Shen Official Standard`_

.. _Shen Official Standard: http://www.shenlanguage.org/Documentation/shendoc.htm#Streams
