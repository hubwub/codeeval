// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Medium
// Challenge Description: Prime Numbers
// Challenge Link: https://www.codeeval.com/open_challenges/46/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include <ctime>
#include <time.h>

using namespace std;

bool isPrime(unsigned int i)
{
	if (i == 2)
	{
		return true;
	}
	else if(i % 2 == 0)
	{
		return false;
	}
	else
	{
		for(unsigned int j = 3; j <= (sqrt(double(i))); j+=2)
		{
			if(i % j == 0)
			{
				return false;
			}
		}
		return true;
	}
}



int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	ifstream file;
	string lineBuffer;
	bool comma;
	file.open(argv[1]);
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	       		istringstream iss(lineBuffer);
	       		unsigned int n;
	       		iss >> n;
	           for(unsigned int i = 2; i <= n; ++i)
				{
					if(isPrime(i))
					{
						if(comma)
						{
							cout << ",";
						}
						cout << i;
						comma = true;
					}

				}
	       		cout << endl;
	       		comma = false;
	       }
	}
}
