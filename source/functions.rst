Functions
=========

Shen is an explicitly typed polymorphic language in the manner of Hope; it requires that functions be entered with their types. ``A --> B --> C`` is shorthand for ``A --> (B --> C)``. ::

  (0-) (tc +) 
  true
  (1+) (define member
  {A --> (list A) --> boolean}
  _ [] -> false
  X [X | _] -> true
  X [_ | Y] -> (member X Y))
  member : (A --> ((list A) --> boolean))

  (2+) (define square
  {number --> number}
  X -> (* X X))
  square : (number --> number)

  (3+) (define swap
  {(A * B) --> (B * A)}
  (@p X Y) -> (@p Y X))
  swap : ((A * B) --> (B * A))

  (4+) (define unit-vector?
  {(vector A) --> boolean}
  (@v _ <>) -> true
  _ -> false)
  unit-vector? : ((vector A) --> boolean)

  (6+) (define unit-string?
  {string --> boolean}
  (@s X "") -> true
  _ -> false)
  unit-string? : (string --> boolean)

  (7+) (member 1 [1 2 3])
  true : boolean

  (8+) (square 4)
  16 : number

  (9+) (swap (@p 1 2))
  (@p 2 1) : (number * number)

  (10+) (unit-vector? (@v 1 <>))
  true : boolean

  (11+) (unit-string? "a")
  true : boolean
