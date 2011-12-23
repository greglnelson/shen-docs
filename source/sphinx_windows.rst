Generating HTML documentation on Windows
========================================

To get the repository
---------------------

Option 1
````````

- Use the "ZIP" link found on the page

Option 2 (cloning the repository with Git)
``````````````````````````````````````````

- Install git for windows http://help.github.com/win-set-up-git/ (only the program is needed for fetching from repositories, the instructions for setting up SSH can be skipped for now)
- Open Git GUI
- Go to "Clone Existing Repository"
- Add the url listed on the page (in this case it is https://github.com/4DA/shen-docs.git )
- Pick any target directory (has to be new)
- Hit clone

If the SSH setup for Github was done, the Git GUI tool can be used to open the local copy of the repository (the directory to where the repository was cloned) and commit any changes made.

To get Sphinx
-------------

- Install Python2 http://python.org/ftp/python/2.7.2/python-2.7.2.msi
- Install Setuptools (2.7 in this case) http://pypi.python.org/pypi/setuptools
- Run (assuming the default instalation location of Python 2.7): ``C:\Python27\Scripts\easy_install.exe Sphinx``
- At this point Sphinx is installed, but the Python Scripts directory has to be added to the PATH environment variable:
    - For Windows XP: http://www.computerhope.com/issues/ch000549.htm
    - For Windows 7: http://geekswithblogs.net/renso/archive/2009/10/21/how-to-set-the-windows-path-in-windows-7.aspx
- Look for the PATH variable and append ``;C:\Python27\Scripts`` to its value (That is, a semicolon, followed with the path to the Python scripts)

To generate the HTML files
``````````````````````````

- Double click on the rebuildhtml.bat file inside the sources directory, this will do a "make clean" followed by a "make html" (which can be done manually from the console)
- The resulting HTML can be found inside _build\html, and the main page is index.html
