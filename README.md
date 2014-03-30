BoostSymLinkError
=================

This is a small testing program to recreate a problem with Boost::Filesystem::is_empty not being able to work with symbolic links anymore.
See this Stackoverflow question for more info: http://stackoverflow.com/questions/22668337/boostfilesystemis-empty-returns-false-for-symlinks

There is Boost 1.55.0 partly included in this project (just everything needed for the test is included)

There are 4 types of files in the data directory:
* test.txt          -> A non-empty text file
* WindowsLink.lnk   -> A standard windows link, like you'll have on your desktop after installing something
* SymLink.txt       -> A symbolic link created with 'mklink SymLink.txt test.txt'
* HardLink.txt      -> A hard link created with 'mklink /H HardLink.txt test.txt'
Note that you can open any file simply with notepad.exe and it'll display the text from test.txt.

When running the test on my Windows 7 64bit machine, the results are the following:
    Checking ../data/test.txt
    Result: false
    Checking ../data/WindowsLink.lnk
    Result: false
    Checking ../data/SymLink.txt
    Result: true
    Checking ../data/HardLink.txt
    Result: false

Note that the SymLink is returning true for boost::filesystem::is_empty(..). This was not the same in Boost 1.46.1.
