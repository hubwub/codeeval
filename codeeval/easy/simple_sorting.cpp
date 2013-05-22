// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Simple Sorting
// Challenge Link: https://www.codeeval.com/open_challenges/91/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	ifstream file;
	string lineBuffer;
	vector<double> numbers;
	bool begin;
	file.open(argv[1]);
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       		numbers.clear();
	      		istringstream iss(lineBuffer);
	      		double temp;

	      		while(iss >> temp)
	      		{
	      			numbers.push_back(temp);
	      		}

	      		sort(numbers.begin(), numbers.end());

	      		for(int i = 0; i < numbers.size(); ++i)
	      		{
	      			if(begin)
	      			{
	      				cout << " ";
	      			}
	      			cout << setprecision(3) << fixed << numbers[i];
	      			begin = true;
	      		}
	      		cout << endl;
	      		begin = false;
	      		
	       }
	}

	return 0;	
}
