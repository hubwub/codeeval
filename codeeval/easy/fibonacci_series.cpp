// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Fibonacci Series
// Challenge Link: https://www.codeeval.com/open_challenges/22/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int fib(int x)
{
	if(x == 0)
	{
		return 0;
	}
	else if(x == 1)
	{
		return 1;
	}
	else
	{
		return fib(x-1) + fib(x-2);
	}
}

int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	ifstream file;
	string lineBuffer;
	file.open(argv[1]);
	int fibo;
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       		std::istringstream iss(lineBuffer);
	       		int n;
	       		iss >> n;
	       		cout << fib(n) << endl;
	       }
	}	
}
