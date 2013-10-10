// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Armstrong Words
// Challenge Link: https://www.codeeval.com/open_challenges/82/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>

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
	       	   istringstream iss(lineBuffer);
	       	   int num;
	       	   iss >> num;

	       	   int count = 0, sum = 0, temp = num;

	       	   while(temp > 0)
	       	   {
	       	   		++count;
	       	   		temp /= 10;
	       	   }

	       	   temp = num;

	       	   while(temp > 0)
	       	   {
	       	   		sum += pow((double) (temp%10), count);
	       	   		temp /= 10;
	       	   }

	       	   if(sum == num)
	       	   {
	       	   		cout << "True" << endl;
	       	   }
	       	   else
	       	   {
	       	   		cout << "False" << endl;
	       	   }

	       }
	}

	return 0;	
}
