// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Even Numbers
// Challenge Link: https://www.codeeval.com/open_challenges/100/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iomanip>

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
	           //do something here
	       	   istringstream iss(lineBuffer);
	       	   int x;
	       	   iss >> x;

	       	   if(x > 0 && x <= 5000)
	       	   {
	       	   		if(x % 2 == 1)
	       	   		{
	       	   			cout << "0" << endl;
	       	   		}
	       	   		else
	       	   		{
	       	   			cout << "1" << endl;
	       	   		}
	       	   }
	       }
	}

	return 0;	
}
