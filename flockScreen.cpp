/*
 * flockScreen.cpp
 *
 *  Created on: 20 Nov 2017
 *      Author: Abdelrahman Barghouth
 */

#include <iostream>
#include <string>
#include <math.h>
#include <unistd.h>

using namespace std;

int main(int argc, char** argv)
{
	string str1,str2;
//	str1 = argv[1];
//	str2 = argv[2];

	cout << "Please enter the first string" << endl;
	getline(cin,str1);
	cout << str1<<endl;

	cout << "Please enter the second string" << endl;
	getline(cin,str2);


	int depth = -1, result =0, stringLength = str1.length();

	if(str1.length()!=str2.length())
	{
		cerr << "Error: Strings are not of the same length" << endl;
		return -1;
	}

	for(int i=0; i<stringLength;i++)
	{
		if(str1[i] == str2[i])
		{
			if(str1[i] == '[')
				depth++;
			else if(str1[i] == ']')
				depth--;
		}
		else if(isalpha(str1[i]) && isalpha(str2[i]))
			result+=pow(2,depth);
		else
		{
			cerr << "Error: Strings are not matched either in depth or fragment size" << endl;
			return -1;
		}
	}
	cout << "Say the magic words and the result will appear!!" << endl;
	sleep(2);
	cout << "Well done!! The result is = " << result << endl;
	return 0;
}
