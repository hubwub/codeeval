// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: FizzBuzz
// Challenge Link: https://www.codeeval.com/open_challenges/1/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

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
	       		stringstream iss(lineBuffer);
	       		int f, b, n;
	       		iss >> f >> b >> n;
	       		for(int i = 1; i <= n; i++)
	       		{
	       			if((i % (f*b)) == 0)
	       			{
	       				cout << "FB ";
	       			}
	       			else if((i % f) == 0)
	       			{
	       				cout << "F ";
	       			}
	       			else if((i % b) == 0)
	       			{
	       				cout << "B ";
	       			}
	       			else
	       			{
	       				cout << i << " ";
	       			}
	       		}
	       		cout << endl;
	       }
	}	
}
