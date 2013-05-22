// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Sum of Primes
// Challenge Link: https://www.codeeval.com/open_challenges/4/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

bool isPrime(int i)
{
	for(int j = 2; j < (i/2 + 1); j++)
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
	int sum = 0;

	for(int i = 2, primes = 0; primes < 1000; ++i)
	{
		if(isPrime(i))
		{
			sum += i;
			primes++;
		}
	}

	cout << sum << endl;
}
