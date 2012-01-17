Random Code Snippets
""""""""""""""""""""

.. raw:: html

  <script type="text/javascript">
    window.onload = function() {
        var nodes = document.querySelectorAll('div.code-snippets .highlight-shen');
        var visible = Math.floor(Math.random() * nodes.length);
        Array.prototype.slice.call(document.querySelectorAll('div.code-snippets .highlight-shen')).forEach(function(node, i) {
            if (i !== visible) {
                node.style.display = 'none';
            }
        });
    };
  </script>

.. container:: code-snippets
    
    .. code-block:: shen

        (0-) (define super
               [Value Succ End] Action Combine Zero ->
                 (if (End Value)
                     Zero
                     (Combine (Action Value)
                              (super [(Succ Value) Succ End]
                                     Action Combine Zero))))
        @{super}@
        
        (1-) (define for
               Stream Action -> (super Stream Action do 0))
        @{for}@

        (2-) (define filter
               Stream Condition ->
                 (super Stream
                        (/. Val (if (Condition Val) [Val] []))
                        append
                        []))
        @{filter}@

        (3-) (for [0 (+ 1) (= 10)] print)
        #{0123456789}#@{0}@
        
        (4-) (filter [0 (+ 1) (= 100)]
                     (/. X (integer? (/ X 3))))
        @{[0 3 6 9 12 15 18 21 24 27 30 42... etc]}@

    .. code-block:: shen
   
        (0+) (define d'
               {(list A) --> (A --> (list A)) --> (A --> boolean)
                         --> (A --> boolean) --> (list A) --> (list A)}
               [S | _] _ G? _ P -> (reverse [S | P]) where (G? S)
               [S | _] _ _ F? _ -> []                where (F? S)
               [S | _] Succ G? F? P <- (fail-if empty?
                                                (d' (Succ S) Succ G? F? [S | P]))
               [_ | S] Succ G? F? P -> (d' S Succ G? F? P)
               _ _ _ _ _ -> [])
        @{d' : ((list A) --> ((A --> (list A)) --> ((A --> boolean)
                       --> ((A --> boolean) --> ((list A) --> (list A))))))}@

        (1+) (define depth
               {A --> (A --> (list A)) --> (A --> boolean) --> (A --> boolean)
                  --> (list A)}
               State Successors Goal? Fail? ->
                 (d' [State] Successors Goal? Fail? []))
        @{depth : (A --> ((A --> (list A)) --> ((A --> boolean)
                   --> ((A --> boolean) --> (list A)))))}@

        (2+) \* Give me a path from 4 to 27 by adding 3, 4 or 5. *\
        (depth 4 (/. X [(+ X 3) (+ X 4) (+ X 5)])
                 (= 27) (/. X (> X 27)))
        @{[4 7 10 13 16 19 22 27] : (list number)}
