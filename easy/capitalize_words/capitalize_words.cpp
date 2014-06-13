// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Capitalize Words
// Challenge Link: https://www.codeeval.com/open_challenges/93/

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
	      		istringstream iss(lineBuffer);
	      		string temp;
	      		
	      		while(iss >> temp)
	      		{
	      			if(temp[0] >= 'a' && temp[0] <= 'z')
	      			{
	      				temp[0] += 'A' - 'a';
	      			}
	      			cout << temp << " ";
	      		}
	      		cout << endl;
	       }
	}

	return 0;	
}
