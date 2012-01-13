.. _system_functions:

System Functions
================


``absvector`` *[_]*

    Given a natural number, creates an absolute
    vector of* n* elements.

``absvector?`` *[A --> boolean]*

    Recognisor for absolute vectors.

``address->`` *[_]*
    
    (address-> E N V) places an
    element E into a vector address N in vector V and
    returns the resultant vector.
 
    **Note**: *this function is destructive*.

``<-address`` [_]

    (<-address-> N V) extracts
    an element from a vector address N in vector V.

``adjoin`` *[A --> (list A)--> (list A)]*
    
    Add a element to a list if it is not already
    present.


``and`` *[boolean --> boolean --> boolean]*

    Boolean and.

``append`` *[(list A) --> (list A) --> (list A)]*

    Appends two lists into one list.


``apply`` *[(A --> B) --> (A --> B)]*
    
    Applies a function to an input.


``arity`` *[A --> number]*
    
    Returns the arity of any function; -1 if no arity
    can be found.

``average`` *[number --> number --> number]*

    The average of two numbers.

``boolean?`` *[A --> boolean]*
    
    Recognisor for booleans.

``bound?`` *[A --> boolean]*
    
    Recognisor for globally bound symbols.

``byte->string`` *[number --> string]*
    
    For code points of the keyboard characters,
    returns the corresponding unit string.

``cd`` *[string --> string]*
    
    Changes the home directory. ``(cd "My Programs")`` will cause
    ``(load "hello_world.txt")`` to load MyPrograms/hello_world.txt.
    ``(cd "")`` is
    the default.

``close`` *[(stream A) --> (list B)]*
    
    Closes any stream, returning the empty list.

``concat`` *[symbol --> symbol --> symbol]*
    
    Concatenates two symbols.

``cons`` *[_]*
    
    A special form that takes an object e of type A
    and a list l of type (list A) and produces a list
    of type (list A) by adding e to the front of l.

``cons?`` *[--> boolean]*
    
    Returns true iff the input is a non-empty list.

``declare`` *[_]*
    
    Takes a function name f and a type t expressed as
    a list and gives f the type t.

``destroy`` *[_]*
    
    Receives the name of a function and removes its
    type from the environment.

``difference`` *[(list A) --> (list A) --> (list A)]*

    Subtracts the elements of the second list from
    the first

``do`` *[_]*
    
    A special form: receives n well-typed expressions
    and evaluates each one, returning the normal form
    of the last one.

``dump`` *[string --> string --> string]*
    
    Dumps all Shen source code from the file *s*
    denoted by the first argument into an object code
    file *o* whose extension is determined by
    the second argument. The second argument may vary
    but "kl" is always supported and
    generates |Kl| code. The
    name of *o* is returned.


``element?`` *[A -> (list A) --> boolean]*
    
    Returns true iff the first input is an element in
    the second.

``empty?`` *[A --> boolean]*
    
    Returns true iff the input is [].

``error-to-string`` *[error --> string]*
    
    Maps any error message into the corresponding
    string.

``eval`` *[_]*
    
    Evaluates the input.

``eval-without-macros`` *[_]*
    
    Evaluates the input but no macros are invoked.

``explode`` *[A --> (list string)]*
    
    Explodes an object to a list of unit strings.

``error`` *[_]*
    
    A special form: takes a string followed by n (n
    --> 0) expressions. Prints error string.

``eval`` *[_]*
    
    Evaluates the input.

``fix`` *[(A --> A) --> (A --> A)]*
    
    Applies a function to generate a fixpoint.

``floor`` *[number --> number]*
    
    Floors a number.

``float?`` *[A --> boolean]*
    
    Recognisor for floating point numbers.

``freeze`` *[A --> (lazy A)]*
    
    Returns a frozen version of its input.

``fst`` *[(A * B) --> A]*
    
    Returns the first element of a tuple.

``function`` *[(A --> B) --> (A --> B)]*
    
    Maps a symbol to the corresponding function that
    it names; raises an error if the input is not a
    symbol or no such function exists.

``gensym`` *[symbol --> symbol]*
    
    Generates a fresh symbol from a symbol.

``get`` []
    
    For a symbol input returns the time. The range of
    the significant inputs and their significance is
    explained in the `Shen Official Standard`_.

``get-time`` *[symbol --> number]*
    
    For a symbol input returns the time. The range of
    the significant inputs and their significance is
    explained in the `Shen Official Standard`_.

``hash`` *[number --> number --> number]*
    
    returns a hashing of the first
    argument subject to the restriction that the
    encoding must not be greater than the second
    argument.

``hd`` *[_]*
    
    As *head*, but the result of applying to
    the empty list is undefined.

``head`` *[(list A) --> A]*
    
    Returns the first element of a list.

``hdv`` *[(vector A)--> A]*
    
    Returns the first element of a non-empty vector.

``if`` *[boolean --> A --> A]*
    
    takes a boolean b and two expressions x and y and
    evaluates x if b evaluates to true and evaluates
    y if b evaluates to false.

``include`` *[(list symbol) --> (list symbol)]*
  
    Includes the datatype theories or synonyms for
    use in type checking.

``include-all-but`` *[(list symbol) --> (list symbol)]*

    Includes all loaded datatype theories and
    synonyms for use in type checking apart from
    those entered.

``inferences`` *[A --> number]*
    
    The input is ignored. Returns the number of
    logical inferences executed since the last call
    to the top level.

``input`` *[_]*
    
    0-place function. Takes a user input i and
    returns the normal form of i.

``input+`` *[_]*
    
    Special form. Takes inputs of the form : <EXPR>. Where
    d(<EXPR>) is the type denoted by the choice of
    expression (e.g. "number" denotes the
    type number). Takes a user input i and returns
    the normal form of i given i is of the type d(<EXPR>).

``integer?`` *[A --> boolean]*
    
    Recognisor for integers.

``intern`` *[string --> symbol]*
    
    For an appropriate string; returns the
    corresponding symbol.

``intersection`` *[(list A) --> (list A) --> (list A)]*

    Computes the intersection of two lists.

``lambda`` *[_]*
    
    Abstraction builder; takes a variable and an
    expression and builds an abstraction.

``length`` *[(list A) --> integer]*
    
    Returns the number of elements in a list.

``limit`` *[(vector A) --> number]*
    
    For any standard vector, returns the size of that
    vector.

``lineread`` *[_]*
    
    Top level reader of read-evaluate-print loop.
    Reads elements into a list. lineread terminates
    with carriage return when brackets are balanced.
    ^ aborts lineread.

``load`` *[string --> symbol]*
    
    Takes a file name and loads the file, returning
    loaded as a symbol.

``map`` *[(A --> B) --> (list A) --> (list B)]*
    
    The first input is applied to each member of the
    second input and the results consed into one
    list..


``mapcan`` *[(A --> (list B)) --> (list A) --> (list B)]*
    
    The first input is applied to each member of the
    second input and the results appended into one
    list.

``make-string`` []
    
    A special form: takes a string followed by n (n
    --> 0) well-typed expressions; assembles and
    returns a string.

``maxinferences`` *[number --> number]*
    
    Returns the input and as a side-effect, sets a
    global variable to a number that limits the
    maximum number of inferences that can be expended
    on attempting to typecheck a program. The default
    is 1,000,000.

``mod`` *[number --> number --> number]*
    
    The modulus of two numbers.

``nl`` *[number --> number]*
    
    For a an input *n*, prints n new lines and
    returns zero. If *n* is omitted assumes *n*
    = 1.

``not`` *[boolean --> boolean]*
    
    Boolean not.

``nth`` *[number --> (list A) --> A]*
    
    Gets the nth element of a list numbered from 1.

``number?`` *[A --> boolean]*
    
    Recognisor for numbers.

``occurences`` *[A --> B --> number]*
    
    Returns the number of times the first argument
    occurs in the second.

``occurs-check`` *[symbol --> boolean]*
    
    Receives either + or - and enables/disables occur
    checking in Prolog, datatype definitions and rule
    closures. The default is +.

``open`` *[_]*
    
    Opens a stream. The range of the significant
    inputs and their significance is explained in the
    `Shen Official Standard`_.

``or`` *[boolean --> (boolean --> boolean)]*
    
    Boolean or.

``output`` [_]
    
    A special form: takes a string followed by n (n
    --> 0) well-typed expressions; prints a
    message to the screen and returns an object of
    type string (the string "done").

``package`` *[_]*
    
    Places expressions in a package. The range of the
    significant inputs and their significance is
    explained in the `Shen Official Standard`_.

``pos`` *[string --> number --> string]*
    
    Gets the nth unit string of a string.

``preclude`` *[(list symbol) --> (list symbol)]*
    
    Removes the mentioned datatype theories and
    synonyms from use in type checking.

``preclude-all-but`` *[(list symbol) --> (list symbol)]*
    
    Removes all the datatype theories and synonyms
    from use in type checking apart from the ones
    given.

``pr`` *[string --> (stream out) --> string]*
    
    Takes string and prints it to the output stream,
    returning its first argument. If the second
    argument is omitted, the standard output is used.

``print`` *[A --> A]*
    
    Takes an object and prints it, returning it as a
    result.

``profile`` *[(A --> B) --> (A --> B)]*
    
    Takes a function represented by a function name
    and inserts profiling code returning the function
    as an output.

``profile-results`` *[A --> symbol]*
    
    The input is ignored. Returns a list of profiled
    functions and their timings since profile-results
    was last used.

``ps`` *[_]*
    
    Receives a symbol denoting a Shen function and
    prints the |Kl| source
    code associated with the function.

``read-file`` *[string --> (list unit)]*
    
    Returns the contents of an ASCII file designated
    by a string. Returns a list of units, where unit
    is an unspecified type.

``read-file-as-bytelist`` *[string --> (list number)]*

    Read a file to a list of bytes.

``read-file-as-string`` *[string --> string]*
    
    Read a file to a string.

``remove`` *[A --> (list A) --> (list A)]*
    
    Removes all occurrences of an element from a
    list.

``reverse`` *[(list A)--> ?(list A)]*
    
    Reverses a list.

``round`` *[number--> ?number]*
    
    Rounds a number.

``simple-error`` *[string --> A]*
    
    Raises an error.

``snd`` *[(A * B) --> B]*
    
    Returns the second element of a tuple.

``specialise`` *[symbol --> symbol]*
    
    Receives the name of a function and turns it into
    a special form. Special forms are not curried
    during evaluation or compilation.

``spy`` *[symbol --> boolean]*
    
    Receives either + or - and respectively
    enables/disables tracing the operation of the
    typechecker.

``sqrt`` *[number --> number]*
    
    Returns the square root of a number.

``str`` *[_]*
    
    Reads a symbol/number/string into a string.

``step`` *[symbol --> boolean]*
    
    Receives either + or - and enables/disables
    stepping in the trace.

``string?`` *[A --> boolean]*
    
    Recognisor for strings.

``symbol?`` *[A --> boolean]*
    
    Recognisor for symbols.

``systemf`` *[symbol --> (list symbol)]*
    
    Gives the function the status of a system
    function; its defintion cannot be overwritten.
    Returns the list of symbols with systemf status.

``tail`` *[(list A) --> (list A)]*
    
    Returns all but the first element of a non-empty
    list.

``tc`` *[symbol --> boolean]*
    
    Receives either + or - and respectively
    enables/disables static typing.

``thaw`` *[(lazy A) --> A]*
    
    Receives a frozen input and evaluates it to get
    the unthawed result..

``time`` [_]
    
    A macro. Prints the run time for the evaluation
    of its input and returns its normal form.

``tl`` *[_]*
    
    Returns the tail of a list; if the list is empty
    the result is platform dependent.

``tlstr`` *[string --> string]*
    
    Returns the tail of a non-empty string.

``tlv`` *[(vector A) --> (vector A)]*
    
    Returns the tail of a non-empty standard vector.

``track`` *[symbol --> symbol]*
    
    Tracks the I/O behaviour of a function.

``tuple?`` *[A --> boolean]*
    
    Recognisor for tuples.

``union`` *[(list A) --> (list A) --> (list A)]*
    
    Forms the union of two lists.

``unprofile`` *[(A --> B) --> (A --> B)]*
    
    Unprofiles a function.

``unspecialise`` *[symbol --> symbol]*
    
    Receives the name of a function and deletes its
    special form status.

``untrack`` *[symbol --> symbol]*
    
    Untracks a function.

``value`` *[_]*
    
    Applied to a symbol, returns the global value
    assigned to it.

``variable?`` *[A --> boolean]*
    
    Applied to a variable, returns true.

``vector?`` *[A --> boolean]*
    
    Recognisor for vectors.

``vector->`` *[(vector A) --> number --> A --> (vector A)]*
    
    Destructively inserts an element into the nth
    address of a vector.

``<-vector`` *[(vector A) --> number --> (vector A)]*
    
    Retrieves the nth element of a vector.

``version`` *[string --> string]*
    
    Changes the version string displayed on startup.

``write-to-file`` *[string --> A --> A]*
    
    Writes the second input into a file named in the
    first input. If the file does not exist, it is
    created, else it is overwritten. If the second
    input is a string then it is written to the file
    without the enclosing quotes. The second input is
    returned.

``y-or-n?`` *[string --> boolean]*
    
    Prints the string as a question and returns true
    for y and false for n.

``@p`` *[_]*
    
    Takes two inputs and forms the ordered pair.

``@s`` *[_]*
    
    Takes *n* strings and concatenates them.

``@v`` *[_]*
    
    Takes *n* (*n* > 1) inputs
    terminating in a vector and forms a new vector
    copying the first *n*-1 elements to the
    front of the old vector. Non-destructive.

``+`` *[number --> number --> number]*
    
    Number addition.

``-`` *[number --> number --> number]*
    
    Number subtraction.

``*`` *[number --> number --> number]*
    
    Number multiplication.

``/`` *[number --> number --> number]*
    
    Number division.

``/.`` *[_]*
    
    Abstraction builder, receives a variable and an
    expression; does the job of --> in the lambda
    calculus.

``>`` *[number --> number --> boolean]*
    
    Greater than.

``<`` *[number --> number --> boolean]*
    
    Less than.

``=`` *[A --> A --> boolean]*
    
    Equal to.

``==`` *[A --> B --> boolean]*
    
    Equal to.

``>=`` *[number --> number --> boolean]*
    
    Greater than or equal to.

``<=`` *[number --> number --> boolean]*
    
    Less than or equal to.

.. _Shen Official Standard: http://www.shenlanguage.org/Documentation/Reference/shendoc.htm

.. |Kl| replace:: Kλ
