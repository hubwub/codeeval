// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Hex to Decimal
// Challenge Link: https://www.codeeval.com/open_challenges/67/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <algorithm>

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
	       		const char* str = lineBuffer.c_str();
	       		long int dec = strtol(str, NULL, 16);
	       		cout << dec << endl;
	       }
	}
}
