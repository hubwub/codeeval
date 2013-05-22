// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Prime Palindrome
// Challenge Link: https://www.codeeval.com/open_challenges/3/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ostream>

using namespace std;

bool isPrime(int i)
{
	for(unsigned int j = 2; j < (i/2 + 1); j++)
		{
			if(i % j == 0)
			{
				return false;
			}
		}	
		return true;
}

int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	int greatest = 0;
   for(int i = 2; i <= 1000; ++i)
	{
		if(isPrime(i))
		{
			string str;
			ostringstream os;
			os << i;			
			str = os.str();

			if(str == string(str.rbegin(), str.rend()))
			{
				greatest = i;
			}			
		}

	}
	
	cout << greatest;
	cout << endl;
}
