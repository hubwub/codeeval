// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Multiplication Tables
// Challenge Link: https://www.codeeval.com/open_challenges/23/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	//Sample code to read in test cases
	for(int i = 1; i <= 12; i++)
	{
		for(int j = 1; j <= 12; j++)
		{
			cout << setw(4) << right << i*j ;
		}
		cout << endl;
	}

	return 0;	
}
