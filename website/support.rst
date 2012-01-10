.. _support:

#######
Support
#######

**This is the place to file bug reports. To submit a bug report, fill out the following form.**

.. raw:: html

      <form action="/sendmail.php" method="post" class="form">
        <div class="clearfix">
          <label>What version number of Shen are you using? *</label>
          <div class="input"><input type="text" name="version" /></div>
        </div>
        <div class="clearfix">
          <label>What port number of Shen are you using? *</label>
          <div class="input"><input type="text" name="port" /></div>
        </div>
        <div class="clearfix">
          <label>
            What platform for Shen are you using? *
            <span class="help">(CLisp, SBCL, Scheme ....)</span>
          </label>
          <div class="input"><input type="text" name="platform" /></div>
        </div>
        <div class="clearfix">
          <label>
            What operating system are you using?
            <span class="help">(Windows 7, Linux, OS X ....)</span>
          </label>
          <div class="input"><input type="text" name="os" /></div>
        </div>
        <div class="clearfix">
          <label>Bug (please describe the bug):</label>
          <div class="input">
            <textarea name="bug" cols="80"></textarea>
          </div>
        </div>

        <p class="info">* This information will be in the credits when Shen starts.</p>

        <input type="submit" value="Submit" class="btn success" />
      </form>
