.. _functions_pattern_matching:

Pattern Matching
================

Like most modern functional languages, Shen sustains pattern-matching. A Shen pattern can be any of the following.

- an atom (symbol, string, boolean or number)
- a tuple or pair using ``@p``
- a list
- a string construction using ``@s``
- a vector construction using ``@v``

. ::

    (0-) (define rep
    \* replace all occurrences of "Julius Caesar" in a string by "Mark Anthony" *\
    "" -> ""
    (@s "Julius Caesar" Ss) -> (@s "Mark Anthony" (rep Ss))
    (@s S Ss) -> (@s S (rep Ss)))
    rep
    (1-) (rep "Julius Caesar invaded Britain")
    "Mark Anthony invaded Britain"

    (2-) (define vector-double
    \* non-destructively double every element in a vector *\
    <> -> <>
    (@v X V) -> (@v (+ X X) (vector-double V)))
    vector-double

    (3-) (vector-double (@v 1 2 3 <>))
    <2 4 6>

    (4-) (define tuple->list
    \* recurse through a tuple converting into a list *\
    (@p X Y) -> [X | (tuple->list Y)]
    X -> [X])
    tuple->list

    (5-) (tuple->list (@p 1 2 3))
    [1 2 3]

    (6-) (define remove-duplicates
    \* remove every duplicated element in a list *\
    [] -> []
    [X | Y] -> (remove-duplicates Y) where (element? X Y)
    [X | Y] -> [X | (remove-duplicates X Y)])
    remove-duplicates

    (7-) (remove-duplicates [1 1 2 3])
    [1 2 3]

.. rubric:: Further Reading

- `FPQi p 70 and after`_
- `Shen Official Standard`_

.. _FPQi p 70 and after: http://shenlanguage.org/Documentation/Reference/FPQi/page070.htm
.. _Shen Official Standard: http://shenlanguage.org/Documentation/shendoc.htm#Standard%20Vectors%20and%20Pattern%20Matching
