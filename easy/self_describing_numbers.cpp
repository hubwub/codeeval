// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Self Describing Numbers
// Challenge Link: https://www.codeeval.com/open_challenges/40/

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
	vector<int> number;
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       	   number.clear();
	       	   number.resize(10);
	       	   istringstream iss(lineBuffer);
	       	   int n;
	       	   iss >> n;

	       	   


	       }
	}

	return 0;	
}
