.. _packages:

Packages
========

The polyadic function ``package`` has the form ``(package S L E1 ... En)`` where

1. ``S`` is a symbol beginning in lowercase which is the name of a package; (e.g ``mypackage``).
2. ``L`` is a list (possibly empty) of non-variable symbols.
3. ``E1`` ... ``En`` are a series of Shen expressions.

The Shen reader prepends the package symbol before all the lowercase user symbols when evaluating ``E1`` ... ``En`` except system symbols and those listed in ``L`` ::

  (2-) (package my-stuff- [main] a b c append main)
  my-stuff-a
  my-stuff-b
  my-stuff-c
  append
  main
 
Packages are used to enclose programs to avoid name clashes and in macros to generate programs.

.. rubric:: Further Reading

- `Shen Official Standard`_

.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Packages
