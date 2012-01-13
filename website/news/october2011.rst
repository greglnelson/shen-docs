.. _news_october2011:

############
October 2011
############

.. figure:: /_static/img/news/roundhay_park_in_a_galleryfull.jpg
   :alt: Leeds Roundhay Park in the Autumn

   Leeds Roundhay Park in the Autumn

Shen Opens Up on Github
=======================

**Developers who want to share applications** written for Shen can now
work from a public repo on Github run by Vasil Diadov. This repo is
purely for applications to run under Shen and is disjoint from the
license controlled porting that is done on the repo run by Kian
Wilcox. People interested can find the repo here:

- https://github.com/vasil-sd/shen-libs

Shen Gets its own Website
=========================

**Shen has got a new website** and you're reading from it right now.

The old Lambda Associates website was confusingly mixing material
relating to Qi and to Shen. The chances of confusion would only grow
as Shen developed and diverged from Qi. Hence we decided to liberate
Shen to live in its own space and leave Lambda Associates for Qi.

We've kept the tradition of showing the seasons with local pictures.

<<< Fast Information Delivery >>>
=================================

We live in age of fast food and fast information; people eat on the
move and acquire information on the move.

The new living space for Shen lays out teaching materials for *fast
information delivery*. There is a 15 minute tutorial in Shen for
experienced functional programmers and a *fast reference* in tabular
form with HTML for all system functions. With each *fast reference*,
there are *detailed online references* for those who want to dig
deeper.  This will make Shen much easier to learn.

News in Real Time
=================

**Lead news items appear in real time**
now on the home page allowing people to link to
the latest developments as they happen. These
developments are indexed on a monthly basis, so
you can still read the monthly newsletter as
before.

Work on a Port to Javascript; LLVM to follow
============================================

*Kian Wilcox is directing the port of Shen to Javascript* and runs the
private development repo for porting Shen.

Shen is written in a low level Lisp called |Kl| , which compiles all of
Shen into a language with 45 primitive functions. It is this 'reduced
instruction set' that makes Shen so portable.

However the spec for |Kl| calls for tail call optimisation and Lisp-like
symbols which poses a challenge for platforms which do not support
these features. Here Kian explains online what he is doing in his
Javascript port.

*"Much of the work necessary for converting to Clojure or Python (or any other non-TCO language) is being done as a pass over* |Kl| *right now in my JS port. Once this is finalized, it should be relatively easy to port the transformed* |Kl| *code to any architecture that supports exceptions or labels.*

*In addition to translating the 40 something primitives [of* |Kl| *], you [normally] need to implement lisp-like symbols in a dual namespace and tail call optimization.  After I've finished my work porting to JavaScript, and then next to the LLVM, you will hopefully not need to do either of the latter - there should exist* |Kl| -> |Kl| *source translations that handle this in the Shen layer for you."*

SBCL Port to Appear this Month
==============================

*Shen 1.9 will be ported to Steel Bank Common Lisp this month*. From
experience, we should have a Shen that is about 4x faster than the
CLisp platform we now have.

This port is part of a big migration that will see Shen move from
Common Lisp to Scheme and then to Javascript before the end
of 2011. In 2012 the migration will continue to other platforms.

Shen 2.0 to Acquire E notation
==============================

*Vasil Diadov is implementing e notation for Shen* which will feature
in Shen 2.0 and will be the first upgrade to the spec since the 23rd
September release. This release should appear in November.

.. |Kl| replace:: Kλ
