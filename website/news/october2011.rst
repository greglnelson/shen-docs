.. _news_october2011:

############
October 2011
############

.. raw:: html

     <table border="0"
        cellpadding="10" cellspacing="0" width="100%">
            <tr>
                <td valign="top" width="40%"><p align="center"><img
                src="../_static/img/news/roundhay_park_in_a_galleryfull.jpg"
                border="1" width="583" height="440"></p>
                <p align="center"><em>Leeds Roundhay Park in the
                Autumn</em></p>
                <p align="center"><font size="5"><strong>Shen
                Opens Up on Github</strong></font></p>
                <p><strong>Developers who want to share
                applications </strong>written for Shen can now
                work from a public repo on Github run by Vasil
                Diadov. This repo is purely for applications to
                run under Shen and is disjoint from the license
                controlled porting that is done on the repo run
                by Kian Wilcox. People interested can find the
                repo here <a
                href="https://github.com/vasil-sd/shen-libs">https://github.com/vasil-sd/shen-libs</a>
                .</p>
                </td>
                <td valign="top"><p align="center"><font size="5"><strong>Shen
                Gets its own Website</strong></font></p>
                <p><strong>Shen has got a new website</strong>,
                and you're reading from it right now.</p>
                <p>The old Lambda Associates website was
                confusingly mixing material relating to Qi and to
                Shen. The chances of confusion would only grow as
                Shen developed and diverged from Qi. Hence we
                decided to liberate Shen to live in its own space
                and leave Lambda Associates for Qi. </p>
                <p>We've kept the tradition of showing the
                seasons with local pictures. </p>
                <p align="center"><font size="5"><em><strong>&lt;&lt;&lt;
                Fast Information Delivery &gt;&gt;&gt;</strong></em></font></p>
                <p>We live in age of fast food and fast
                information; people eat on the move and acquire
                information on the move.</p>
                <p>The new living space for Shen lays out
                teaching materials for <em>fast information
                delivery</em>. There is a 15 minute tutorial in
                Shen for experienced functional programmers and a
                <em>fast reference</em> in tabular form with HTML
                for all system functions. With each <em>fast
                reference</em>, there are <em>detailed online
                references</em> for those who want to dig deeper.
                This will make Shen much easier to learn.</p>
                <p align="center"><font size="5"><strong>News in
                Real Time</strong></font></p>
                <p><strong>Lead news items appear in real time</strong>
                now on the home page allowing people to link to
                the latest developments as they happen. These
                developments are indexed on a monthly basis, so
                you can still read the monthly newsletter as
                before.</p>
                </td>
            </tr>
            <tr>
                <td valign="top" width="40%"><p align="center"><font
                color="#000000" size="5"><strong>Work on a Port
                to Javascript; LLVM to follow</strong></font></p>
                <p align="left"><strong>Kian Wilcox is directing
                the port of Shen to Javascript</strong> and runs
                the private development repo for porting Shen. </p>
                <p align="left">Shen is written in a low level
                Lisp called K<font face="Symbol">l</font>, which
                compiles all of Shen into a language with 45
                primitive functions. It is this 'reduced
                instruction set' that makes Shen so portable. </p>
                <p align="left">However the spec for K<font
                face="Symbol">l </font>calls for tail call
                optimisation and Lisp-like symbols which poses a
                challenge for platforms which do not support
                these features. Here Kian explains online what he
                is doing in his Javascript port.</p>
                <p align="left"><em>&quot;Much of the work
                necessary for converting to Clojure or Python (or
                any other non-TCO language) is being done as a
                pass over K</em><font face="Symbol"><em>l</em></font><em>
                right now in my JS port. Once this is finalized,
                it should be relatively easy to port the
                transformed K</em><font face="Symbol"><em>l</em></font><em>
                code to any architecture that supports exceptions
                or labels.</em></p>
                <p align="left"><em>In addition to translating
                the 40 something primitives [of K</em><font
                face="Symbol"><em>l</em></font><em>], you
                [normally] need to implement lisp-like symbols in
                a dual namespace and tail call optimization.
                After I've finished my work porting to
                JavaScript, and then next to the LLVM, you will
                hopefully not need to do either of the latter -
                there should exist K</em><font face="Symbol"><em>l</em></font><em>-&gt;K</em><font
                face="Symbol"><em>l</em></font><em> source
                translations that handle this in the Shen layer
                for you.&quot;</em></p>
                </td>
                <td valign="top"><p align="center"><font size="5"><strong>SBCL
                Port to Appear this Month</strong></font></p>
                <p align="left"><font size="3"><strong>Shen 1.9
                will be ported to Steel Bank Common Lisp this
                month</strong>. From experience, we should have a
                Shen that is about 4</font><font size="3"
                face="Verdana">x</font><font size="3"> faster
                than the CLisp platform we now have. </font></p>
                <p align="left"><font size="3">This port is part
                of a big migration that will see Shen move from
                Common Lisp to Scheme and then to Javascript
                before the end of 2011. In 2012 the migration
                will continue to other platforms.</font></p>
                <p align="center"><font size="5"><strong>Shen 2.0
                to Acquire E notation</strong></font></p>
                <p align="left"><font size="3"><strong>Vasil
                Diadov is implementing e notation for Shen </strong>which
                will feature in Shen 2.0 and will be the first
                upgrade to the spec since the 23rd September
                release. This release should appear in November.</font></p>
                </td>
            </tr>
        </table>
