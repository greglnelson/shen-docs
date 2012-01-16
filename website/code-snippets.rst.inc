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

        (define super
          [X S E] P F Y -> (if (E X)
                               Y
                               (F (P X) (super [(S X) S E] P F Y))))
        
        (define for
          Stream P -> (super Stream P do 0))

        (define filter
          Stream P -> (super Stream
                             (/. X (if (P X) [X] []))
                             append
                             []))

        (for [0 (+ 1) (= 10)] print)
        [OUT:] 01234567890
        
        (filter [0 (+ 1) (= 100)]
                (/. X (integer? (/ X 3))))
        [RESULT:] [0 3 6 9 12 15 18 21 24 27 30 42... etc]

    .. code-block:: shen
   
        (define d'
          {(list A) --> (A --> (list A)) --> (A --> boolean)
                    --> (A --> boolean) --> (list A) --> (list A)}
          [S | _] _ G? _ P -> (reverse [S | P]) where (G? S)
          [S | _] _ _ F? _ -> []                where (F? S)
          [S | _] Succ G? F? P <- (fail-if empty?
                                           (d' (Succ S) Succ G? F? [S | P]))
          [_ | S] Succ G? F? P -> (d' S Succ G? F? P)
          _ _ _ _ _ -> [])

        (define depth
          {A --> (A --> (list A)) --> (A --> boolean) --> (A --> boolean) --> (list A)}
          State Successors Goal? Fail? -> (d' [State] Successors Goal? Fail? []))

        \* Give me a path from 4 to 27 by adding 3, 4 or 5. *\
        
        (depth 4 (/. X [(+ X 3) (+ X 4) (+ X 5)])
                 (= 27) (/. X (> X 27)))
        [RESULT:] [4 7 10 13 16 19 22 27] : (list number)