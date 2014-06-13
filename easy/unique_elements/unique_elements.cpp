// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Unique Elements
// Challenge Link: https://www.codeeval.com/open_challenges/29/

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
	       		int current = 0;
	       		iss >> current;
	       		cout << current;
	       		int previous = current;
	       		while(iss >> current)
	       		{
	       			if(previous == current)
	       			{
	       				continue;
	       			}
	       			cout << "," << current;
	       			previous = current;
	       		}
	       		cout << endl;
	       }
	}

	return 0;	
}
