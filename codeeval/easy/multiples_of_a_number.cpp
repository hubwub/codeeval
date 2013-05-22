// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Multiples of a Number
// Challenge Link: https://www.codeeval.com/open_challenges/18/

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
	       		replace(lineBuffer.begin(), lineBuffer.end(), ',', ' ');
	       		istringstream iss(lineBuffer);
	       		int x , n = 0;

	       		iss >> x >> n;

	       		while(n < x)
	       		{
	       			n <<= 1;
	       		}

	       		cout << n << endl;
	       }
	}

	return 0;	
}
