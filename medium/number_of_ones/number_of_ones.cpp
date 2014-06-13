// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Medium
// Challenge Description: Number of Ones
// Challenge Link: https://www.codeeval.com/open_challenges/16/

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
	       		int x, r;
	       		int count = 0;
	       		istringstream iss(lineBuffer);
	       		iss >> x;
	       		
	       		while(x != 0)
	       		{
	       			r = x % 2;
	       			x = x / 2;
	       			if(r == 1)
	       			{
	       				++count;
	       			}
	       		}

	       		cout << count << endl;

	       }
	}

	return 0;	
}
