// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Medium
// Challenge Description: Counting Primes
// Challenge Link: https://www.codeeval.com/open_challenges/63/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>

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
	       	   unsigned int x,y;
	       	   int count = 0;
	       	   iss >> x >> y;
	       	   for(unsigned int i = x; i <= y; ++i)
	       	   {
	       	   	   if(isPrime(i))
					{
						++count;
					}
	       	   }

	       	   cout << count << endl;
	       }
	}

	return 0;	
}
