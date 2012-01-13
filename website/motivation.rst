.. _motivation:

##########
Motivation
##########

Shen began many years ago in 1989 when Dr. Mark Tarver was working at the Laboratory for the Foundations of Computer Science at Edinburgh. The original idea was to bring to the Lisp environment many of the advantages of ML; specifically pattern-matching and later type checking. The result of this work was the language *Qi* which won the author the Promising Inventor Award from Stony Brook University in 2003.

*Qi* was a ground-breaking langage that went far beyond ML and Haskell in providing type definitions through sequent calculus; a Turing-equivalent notation for defining formal reasoning system of all kinds. *Qi* linked this notation to an inbuilt Prolog for compiling sequent calculus and threw in lazy evaluation on demand, s-expr metaprogramming, a TDPL compiler-compiler and a macro system. The result was an extremely elegant and powerful programming environment.

However *Qi* was limited by its restrictive license and the dependence on Common Lisp in which it was coded. In his invited talk to ESL 2009, Dr Tarver argued that by reducing the instruction set in which *Qi* was coded, from 118 functions to 50 or less, it would be possible to create a version of *Qi* that could be easily ported to other platforms. The production of type-secure Python, Clojure, Javascript etc. could be done from one single platform.

The reduced instruction set defined a very restricted Lisp which was then called Kernel Lisp and later |Kl|. This super-portable version of *Qi* was called **Shen** - the Chinese word for spirit.

This project received funding in December 2010. In September 2011, Shen was delivered under a $free license.

Shen runs under 45 primitive instructions but is even more powerful than *Qi*. Shen added to *Qi* all of the following;

- an improved macro system, 
- packages, 
- pattern-directed handling of strings and vectors, 
- and the capacity to process binary files. 

Following its release under CLisp, Shen is being rapidly ported to SBCL, Scheme and Javascript. Soon you will be able to enjoy the benefits of this award-winning language under your favourite platform.

.. |Kl| replace:: Kλ
