# Fly_Flock-Intern

This repository is for applying to Fly Flock internship in London

It consists of a C project in addition to a python code that compares 2 arbitrary strings with various nesting depths and it calculates a number using a formula stated in the question.

Both codes handles improper user inputs either in strings lengths, depths or fragments sizes.

i- In these codes, I assumed several things:

	1- The code compares only 2 strings, which is supposed by the user to input through the terminal.

	2- Each input will be written when asked by the code as I take the whole line for one input so the user can't input the 2 strings together with just a delimeter whatever it is.

	3- Each fragment has to be word without numericals, dashes or underscore or any other non-alpha chars.

ii- The computational time which is the capital O of these codes can be easily calculated using the duration taken by the for loop. If we assumed that the number of characters is "N", so we need time of "2N" for the perfectly matching strings.

iii- Although the code is functioning well, I see it can improved in several aspects.

	1- I can split the code at first and compare each fragment's length in more accurate way.

	2- Use the pattern to make my code faster, for example when I find a comma, I skip the next 2 characters as they are supposed to be a space and a quotaion opener, and both are not effective in the result for my approach.


iv- I tested this code with a simple test bench called "test_bench.txt" in this link. the tests were trying at first the normal conditions with the example given for a working code and error examples. I tested also the sensitivity of changing the end or beginning of the fragments. Then I tested the code with no depths and observed the result. I tested also numbers in the fragments and outside to see if the code is neglecting the effect of these numericals on my code. At last I tested the code with the same string in put for both. However, I didn't use case sensitivity as I didn't know if we should reject it or not.

v- To run these codes:

	1- For the python code, use any python environment and run it.	

	2- The c code, You can either take the source file "flockScreen.cpp" and compile it and run it separately, or You can import the whole project in any IDE (I tried on eclipse) build the project and run it.
