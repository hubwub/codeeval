// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Happy Numbers
// Challenge Link: https://www.codeeval.com/open_challenges/39/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;


int happy(int number)
{
	int sum = 0;

	while(number != 0)
	{
		sum += (number % 10) * (number % 10);
		number /= 10;
	}

	return sum;
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
	       	   istringstream iss(lineBuffer);
	       	   int temp;
	       	   iss >> temp;

	       	   while(1)
	       	   {
	       	   		temp = happy(temp);

	       	   		if(temp == 1 || temp == 4)
	       	   		{
	       	   			if(temp == 1)
	       	   			{
	       	   				cout << "1" << endl;
	       	   			}
	       	   			else
	       	   			{
	       	   				cout << "0" << endl;
	       	   			}
	       	   			break;
	       	   		}
	       	   }
	       }
	}

	return 0;	
}
