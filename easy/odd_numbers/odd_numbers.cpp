// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Odd Numbers
// Challenge Link: https://www.codeeval.com/open_challenges/25/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	for(int i = 1; i <= 99; i++)
	{
		if(i % 2 == 1)
		{
			cout << i << endl;
		}
	}

	return 0;	
}
