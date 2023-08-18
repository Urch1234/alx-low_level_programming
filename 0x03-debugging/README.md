TASK ON 0x03. C - Debugging

Resources

Read or watch:

    Debugging
    Rubber Duck Debugging

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.

Learning Objectives
General

    What is debugging
    What are some methods of debugging manually
    How to read the error messages
Requirements
General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    A README.md file at the root of the repo, containing a description of the repository
    A README.md file, at the root of the folder of this project (i.e. 0x03-debugging), describing what this project is about

Task starts here proper:

0. Multiple mains 
	In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:
1. Like, comment, subscribe 
	Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

    Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
    You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.
2. 0 > 972? 
	This program prints the largest of three integers.
	? That’s definitely not right.

	Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

    Line count will not be checked for this task.
3. Leap year 
	This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
	Output looks good for 04/01/1997! Let’s make a new main file 3-main_b.c to try a case that is a leap year: 02/29/2000.
	? That doesn’t seem right.

Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.

    Line count will not be checked for this task.
    You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
    You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
