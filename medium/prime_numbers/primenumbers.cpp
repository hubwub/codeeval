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
	clock_t start = clock();
	ifstream file;
	ofstream out;
	out.open("primeswithout.txt");
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
	       		cout << lineBuffer << endl;
	       		unsigned int n;
	       		iss >> n;
	           for(unsigned int i = 2; i <= n; ++i)
				{
					if(isPrime(i))
					{
						if(comma)
						{
							out << ",";
						}
						out << i;
						comma = true;
					}

				}
	       		out << endl;
	       		comma = false;
	       }
	}

	clock_t end = clock();
	float diff((float)end - (float)start);
	cout << diff/CLOCKS_PER_SEC << endl;
}
