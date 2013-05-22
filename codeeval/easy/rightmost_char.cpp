// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Rightmost Char
// Challenge Link:  https://www.codeeval.com/open_challenges/31/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

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
	       		string temp, c;
	       		int pos;

	       		while(getline(iss, temp, ','))
	       		{
	       			iss >> c;
	       			pos = temp.find_last_of(c);
	       			cout << pos << endl;
	       		}
	       }
	}
	return 0;	
}
