// CodeEval
// Anne Celestino - hubwub
// Challenge Level: 
// Challenge Description:
// Challenge Link: 

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
	       		string testcases;
	       		iss >> testcases;
	       }
	}

	return 0;	
}
