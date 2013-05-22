// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Swap Case
// Challenge Link: https://www.codeeval.com/open_challenges/96/

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
	      			for(int i = 0; i < temp.size(); ++i)
	      			{
		      			if(temp[i] >= 'a' && temp[i] <= 'z')
		      			{
		      				temp[i] += 'A' - 'a';
		      			}
		      			else if(temp[i] >= 'A' && temp[i] <= 'Z')
		      			{
		      				temp[i] -= 'A' - 'a';
		      			}
		      			else
		      			{
		      				;
		      			}
	      			}
	      			cout << temp << " ";
	      		}
	      		cout << endl;
	       }
	}

	return 0;	
}
