// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Lowercase
// Challenge Link: https://www.codeeval.com/open_challenges/20/

#include <iostream>
#include <string>
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
	           //do something here
	       	   transform(lineBuffer.begin(), lineBuffer.end(), lineBuffer.begin(), ::tolower);
	       	   cout << lineBuffer << endl;
	       }
	}

	return 0;	
}
