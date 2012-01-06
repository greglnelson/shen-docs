.. _streams:

Streams
=======

In the current version (3.0) of Shen, streams are used to read from or to files. The function to create a stream is ``(open kind string direction)``. ``kind`` indicates the nature of the stream, which is current releases must be file. ``string`` is a pathname to the file and direction is ``in`` for source and ``out`` for sink.

The primitive ``read`` and ``write`` functions for streams are ``read-byte`` and ``pr`` (see **bytes, files** and **I/O** in the fast reference). These read a byte from a source stream or print a string to a sink stream. ``close`` closes a stream.

.. code-block:: shen

    (13-) (set *mystream* (open file "gate-of-consciousness.ico" in)) {read a binary file}
    #<INPUT BUFFERED FILE-STREAM (UNSIGNED-BYTE 8) #P"gate-of-consciousness.ico">
  
    (14-) (read-byte (value *mystream*))
    0
  
    (15-) (read-byte (value *mystream*))
    0
  
    (16-) (read-byte (value *mystream*))
    1
  
    (17-) (close (value *mystream*))
    []

.. rubric:: Further reading

- `Shen Official Standard`_

.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Streams

