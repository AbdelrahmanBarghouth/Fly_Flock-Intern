#
# flockScreen.py
# Author: Abdelrahman Barghouth
# Date: 18/11/2017
#

import math
import time
from sys import stdin
import sys

def calculateResult(str1,str2):
	depth = -1
	result =0

	stringLength = len(str1)

	if(len(str1)!=len(str2)):
		sys.exit("Error: Strings are not of the same length")

	for i in range (0,stringLength):
		if(str1[i] == str2[i]):
			if(str1[i] == '['):
				depth=depth+1
			elif(str1[i] == ']'):
				depth=depth-1
		elif(str1[i].isalpha==1 and str2[i].isalpha==1):
			result=result+pow(2,depth)
		else:
			sys.exit("Error: Strings are not matched either in depth or fragment size")
	return result

print("Please enter the first string")
str1 = stdin.readline()

print("Please enter the second string")
str2 = stdin.readline()

result = calculateResult(str1,str2)

print( "Say the magic words and the result will appear!!")
time.sleep(2)
print("Well done!! The result is = ", result)
