// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Sum of Digits
// Challenge Link: https://www.codeeval.com/open_challenges/21/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	int sum = 0;
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
	           //do something here
	       	    for(int i = 0; i < lineBuffer.size(); i++)
	       	    {
	       	    	if(lineBuffer.at(i) >= 48 && lineBuffer.at(i) <= 57)
	       	    	{
		       	    	char c = lineBuffer.at(i);
		       	    	int a = (int)c - 48;
		       	    	sum += a;
	       	    	}
	       	    }
				cout << sum << endl;
				sum = 0;
	       }
	}


	return 0;	
}
