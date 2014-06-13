// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: N Mod M
// Challenge Link: https://www.codeeval.com/open_challenges/62/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	ifstream file;
	string lineBuffer;
	file.open(argv[1]);
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	       		istringstream iss(lineBuffer);
	       		int x, y, result;
	       		vector<int> numbers;

	       		while(iss)
	       		{
	       			string s;
	       			if(!getline(iss, s, ',')) break;
	       			numbers.push_back(atoi(s.c_str()));
	       		}

	       		x = numbers[0];
	       		y = numbers[1];
	       		result = x;
	       		
	       		while(result >= y)
	       		{
	       			result -= y;
	       		}

	       		cout << result << endl;
	           
	       }
	}

}
