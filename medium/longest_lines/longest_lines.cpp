// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Medium
// Challenge Description: Longest Lines
// Challenge Link: https://www.codeeval.com/open_challenges/2/

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
	vector<string> list;
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       		int num;
	       		string line;
	       		istringstream iss(lineBuffer);
	       		iss >> num;
	       		cout << num;

	       		iss >> line;
	       		cout << line;
	       }
	}

	return 0;	
}
