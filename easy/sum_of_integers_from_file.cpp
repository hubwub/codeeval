// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Sum of Integers from File
// Challenge Link: https://www.codeeval.com/open_challenges/24/

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
	       	   std::istringstream iss(lineBuffer);
	       	   int n;
	       	   iss >> n;
	       	   sum += n;
	       }
	}

	cout << sum << endl;

	return 0;	
}
