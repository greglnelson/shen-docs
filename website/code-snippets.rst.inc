..
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
