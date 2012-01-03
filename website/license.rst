.. _license:

############
Terms of Use
############

By '**derivative work**' we understand it as defined by the US copyright law. We emphasise the following passage from the copyright act of the USA

    "Making minor changes or additions of little substance to a preexisting work will not qualify the work as a new version for copyright purposes."

By '**copyright holder**' we understand Dr Mark Tarver, or, in the event of his decease, the committee appointed under the terms of his will to administer his intellectual estate.

By '**the software**' we understand Shen and all the code used to implement it. We include both the original source code written in Shen, and the code derived from this code through compilation to other languages.

By '**Shen standard**' we understand the latest standards for Shen laid down by the copyright holder.

By '**the user**' we understand any person or group of persons, whether organised in a commercial company, cooperative or institution or not, that use the software. The use of 'he' and 'his' to refer to the user follows English usage, but makes no special assumptions about gender or plurality.

===========
The License
===========

The user is free to produce commercial applications with the software, to distribute these applications in source or binary form, and to charge monies for them as he sees fit and in concordance with the laws of the land subject to the following license.

#. The license applies to all the software and all derived software and must appear on such.
#. It is illegal to distribute the software without this license attached to it and use of the software implies agreement with the license as such. It is illegal for anyone who is not the copyright holder to tamper with or change the license.
#. Neither the names of the copyright holder or of any of the web sites administered by him may be used to endorse or promote products built using the software without specific prior written permission from the copyright holder.
#. That possession of this license does not confer on the copyright holder any special contractual obligation towards the user. That in no event shall the copyright holder be liable for any direct, indirect, incidental, special, exemplary or consequential damages (including but not limited to procurement of substitute goods or services, loss of use, data, or profits; or business interruption), however caused and on any theory of liability, whether in contract, strict liability or tort (including negligence) arising in any way out of the use of the software, even if advised of the possibility of such damage. 
#. It is permitted for the user to change the software, **for the purpose of improving performance, correcting an error, or porting to a new platform**, and distribute the modified version of Shen (hereafter the modified version) provided the resulting program conforms in all respects to the Shen standard and is issued under that title. The user must make it clear with his distribution that he/she is the author of the changes and what these changes are and why. 
#. Derived versions of this software in whatever form are subject to the same restrictions. In particular it is not permitted to make derived copies of this software which do not conform to the Shen standard or appear under a different title.
#. It is permitted to distribute versions of Shen which incorporate libraries, graphics or other facilities which are not part of the Shen standard.

=====================
The License in Detail
=====================

The user is free to produce commercial applications with the software, to distribute these applications in source or binary form, and to charge monies for them as he sees fit and in concordance with the laws of the land subject to the following license.

That's the $free part. You can write your own Shen software and put your own license on it and charge what you want and distribute it either as closed or open source. We'll come back to that.

#. The license applies to all the software and all derived software and must appear on that software.

    That means that the license applies to the Shen source code and the Kl source code which comes with the download. You will see that this code carries a copyright on the code. The concept of derivative is explained in US law as follows.
        
    A |left-quot| derivative work |right-quot| is a work based upon one or more pre-existing works, such as a translation, musical arrangement, dramatization, fictionalization, motion picture version, sound recording, art reproduction, abridgment, condensation, or any other form in which a work may be recast, transformed, or adapted. A work consisting of editorial revisions, annotations, elaborations, or other modifications which, as a whole, represent an original work of authorship, is a |left-quot| derivative work |right-quot|.
        
    To this we add that any computable mapping of the Shen source code and the Kl source code to another medium i.e. another language; counts as a derivative work in our understanding, and it is immaterial **whether this mapping is done by a human being or by a computer**. If you map Shen into Javascript by writing a compiler, then the resulting Javascript program carries the same license as the original and that license must appear on the code.  If you retitle some of the functions using a global substitution it is a derivative work. If you copy it out in copperplate using a quill, it is derivative. In other words, the message and not the medium is important.

#. It is illegal to distribute the software without this license attached to it and use of the software implies agreement with the license as such. It is illegal for anyone who is not the copyright holder to tamper with or change the license.

    This is basic. You cannot remove this license or change it - only the copyright holder can do that.

#. Neither names of the copyright holder or of any of the web sites administered by him may be used to endorse or promote products built using the software without specific prior written permission from the copyright holder.

    You cannot say 'My software is great because Mark Tarver recommends it' or 'Lambda Associates says this is really reliable' unless we did actually say that, and gave you the written permission to use our endorsement. That said, if you do write something really great in Shen, I'd be happy to endorse it and for you to use that endorsement.

#. That possession of this license does not confer on the copyright holder any special contractual obligation towards the user. That in no event shall the copyright holder be liable for any direct, indirect, incidental, special, exemplary or consequential damages (including but not limited to procurement of substitute goods or services, loss of use, data, or profits; or business interruption), however caused and on any theory of liability, whether in contract, strict liability or tort (including negligence) arising in any way out of the use of the software, even if advised of the possibility of such damage. 

    This is the usual disclaimer. It protects us from a lawsuit in case anything goes wrong with our software. However Shen is based on a design with 20 years R&D; it has been very thoroughly tested by myself and by the people who have ported it to other platforms. So in all you are pretty safe here.

#. It is permitted for the user to change the software, **for the purpose of improving performance, correcting an error, or porting to a new platform**, and distribute the modified version of Shen (hereafter the modified version) provided the resulting program conforms in all respects to the Shen standard and is issued under that title and the original license. The user must it clear with his distribution that he/she is the author of the changes and what these changes are and why. 

    Shen sources are readable for several reasons. The first is that we want to allow people to read our code and correct mistakes.  The second is that people porting Shen to different OSes and different platforms need open access to the code to do the porting. The last is we allow people to improve the efficiency of our code by changing it - as long as it then still works i.e. it conforms to the spec.  You have to put your name on the changes you make, because, in the event that something goes wrong, we cannot take the moral responsibility for those changes.  It should be obvious (I hope) that optimising a small piece of code does not change the license or allow you to change the license. The resulting work is still derivative.

#. Derived versions of this software in whatever form are subject to the same restrictions. In particular it is not permitted to make derived copies of this software which do not conform to the Shen standard or appear under a different title.

    Again this emphasises what we said in explicating 1. This point just says you cannot evade the license by simply retitling and reselling our code under a different title e.g. Shine.

#. It is permitted to distribute versions of Shen which incorporate libraries, graphics or other facilities which are not part of the Shen standard.

    This means you are free to add things to Shen which are not part of the standard and you can distribute that work under the Shen title.

=======================================
The Motivation for Shen and the License
=======================================

Now let's look at the motivation for this license. The motivation for the license is the motivation for Shen itself; we set ourselves a goal and achieved it; we produced a version of Qi which runs uniformly according to specification, not just under Common Lisp, but under Scheme and Javascript (and to come Clojure, Python, ...etc). How did we do this?

First, we did it by reducing the instruction set necessary to run Shen to an absolute minimum, currently (September, 2011), 45 primitive functions. Second we maintain a rigorous testing and specification for the work we produce and we make sure that, under whatever the platform Shen appears, Shen runs out of the box on that platform, according to spec, **without exception**. The motto for Shen is:

.. highlights::
   **"Write once, run anywhere."**

That means that the professional programmer can rely on Shen to work for him and he can write a Shen program once and move it to CL, Javascript etc, and (modulo performance) expect it to work. This is very important.

Part of our motivation in maintaining a tight spec and a reliable platform is to hold the Shen community together so that **we do not splinter our resources on multiple incompatible forks**.  We do not want multiple incompatible dialects of Shen, multiple compilers, multiple incompatible libraries. We want $free readable libraries that work for all of us and libraries we can pick up and use without worrying about compatibility. Hence the production of derivative non-conforming programs from our source, whether called Shen, Shin, Shine or Shoo, is barred by the license. To give up on this is to give up on the motivation for Shen.

We are therefore not open source. Generally, the diversity and freedom to fork which was lauded as a strength of open source, has turned into the major weakness of Linux. This OS has been burdened by multiple forks, multiple distros, multiple apps for doing the same thing to the point where essentially the same work has been redone over and over again by different groups. The resultant wastage of effort has been huge and the result has been lack of cross platform usability, a lack of uniformity in the user interface, a reliance on complex dependencies and too often, software that reflects the scattering of human resources by displaying broken functionality. Even Linux fans are seeing this. This in turn has given Linux a bad name. We want to avoid all that.

The analogy that we would like people to carry with them is that of a spinning wheel. The freedom of the wheel to spin depends on there being a fixed hub which at its theoretical geometrical centre point shows zero motion. Our adherence to standards and discipline as system programmers allows you, the applications programmer, to be confident of basing your work on ours.

==============
Some Questions
==============

There are probably more questions than we can anticipate; hence this list will grow as people ask them. Here are a few obvious ones.

#. Is Shen subject to something like GPL? For instance, if I distribute Shen source with my application, do I have to make my code readable or $free?

    No, any code you write using Shen is your code. If it is really an application running on top of our code and not a derivative of our code, then you can do what you want with it. We do not covet your work.

#. Suppose I write a compiler for Shen in C and I want to sell it as closed source. Can I? Even if I use your code?

    Yes; there is nothing to stop you writing a superfast compiler for Shen and selling it to people. As long as it meets the language specification, we really don't mind

#. Suppose I move Shen to another platform and make an error, breaking the spec, what happens?

    Generally you would want to avoid breaking the spec, but supposing that you did, you would first have to issue an announcement to your users explaining there was a bug. Second, you would have to fix it. If you could not fix it, you would have to withdraw it.

#. Suppose I wanted to distribute some enhanced version of Shen e.g. with a graphics tool or special editor. Would my work be bound by the Shen license?

    Again the code you write which rides on the top of our code is not bound by our license, this is yours. And there is nothing to say that you cannot add extra features, bells and whistles, to your version of Shen; but what you cannot do is add a feature than causes Shen to fail to execute according to spec. And you cannot simply get round this by retitling the resultant implementation by another name.

#. Can I change Shen source and sell it as closed source?

    Yes; it's probably not a very sound business proposition because we keep our sources readable. But you could do that provided the result still ran according to spec under the same name.

#. Can I sell support and services to Shen?

    Of course.

#. Will the library appear under the same license that Shen uses?

    No; we are pretty much laissez faire with respect to applications written in Shen.  We don't insist on any license restrictions on what appears in the library. However if you want to make a for-money closed source contribution to the library and you wanted us to mount it on our website, you would have to negotiate a fee for us giving it space and advertising. If you wanted to make it open source, under BSD or MIT for instance, then we'd certainly put it up - no fee. **Generally we are into open source for the library**, because the motivation for constraint is less than for the kernel on which everything depends and we want people to be able to use this stuff freely. We are into experimentation at this level.

#. Will the standard for Shen remain the same?

    No; no language standard remains static. We need to evolve standards for calling foreign processes etc.; so we cannot freeze our work to what we have achieved in 2011.

#. So does this mean that I could write a program in Shen in 2011 and find it does not work in 2013?

    Almost certainly not.  We don't intend to remove or change what we have already done. Changes will be incremental - aimed at increasing the power of the language, giving users the ability to do new things, not taking away their ability to do old things.

#. If I produced my version of Shen, and it conformed to your standard in 2011 and then you added a new feature, would I be required to update my implementation?

    Yes; but note that we always make our code readable and documented, we support our system programmers, and we are conservative in making changes; for one thing, we don't want to make work for ourselves and our colleagues.

#. Suppose I created a plugin for Shen which was really cool e.g. a feature for enabling concurrency. Suppose you changed the standard for Shen to include a version of concurrency that made my work contravene the new standard. What would happen?

    We cannot do that. We cannot make a feature created by somebody **retrospectively** illegal by changing the standard in such a way that that feature is out of bounds. What we would do in that event, is make sure that our version of concurrency was invoked in such way as not to be inconsistent with the existence of your version under Shen. This is simple to do e.g. use different identifiers. Of course, if your feature was that cool you might want to offer it as part of the new standard. But that would be your choice.

#. I notice the copyright holder and designer is Mark Tarver. What happens to the project if something happens to him?

    After 2011, the work on Shen becomes more open and there will be an advisory committee on the development of Shen. Though Mark Tarver occupies the position of BDFL and has the final word, should something happen to him - death or incapacity; then executive decision and copyright will pass to the committee which will collectively assume the position of BDFL.

#. Could you tell me more about the committee?

    The committee is composed of people with technical knowledge that is useful to the development of Shen and people who have made a significant technical contribution - such as moving Shen to another platform or developing some significant systems application. They are selected by Mark Tarver on this basis and are there to give advice.  But in the event that Mark is dead or incapacitated, they will elect people and make decisions based on majority voting with the chairman having the casting vote. The committee will be about six people and will be formed before the end of 2011.

#. Will Shen always be $free and readable?

    Yes.

#. Could you summarise the whole idea of the license in one sentence?

    Sure

.. highlights::
    **"Thou shalt not break the spec"**

.. |left-quot| unicode:: U+201C .. Left Quote
   :rtrim:
.. |right-quot| unicode:: U+201D .. Right Quote
   :ltrim:
