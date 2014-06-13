// CodeEval
// Anne Celestino - hubwub
// Challenge Level: 
// Challenge Description:
// Challenge Link: 

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
	vector<int*> numbers;
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
	       		numbers.resize(9);
	       		istringstream iss(lineBuffer);
	       		int num;
	       		int order = 0;
	       		bool uniques = false;
	       		while(iss >> num)
	       		{
	       			cout << "num: " << num << endl;
	       			if(num >= 1 && num <= 9)
	       			{
	       				numbers[num-1][order]++;
	       				order++;
	       			}
	       		}

	       		for(int i = 0; i < numbers.size(); i++)
	       		{
	       			if(numbers[i][] == 1)
	       			{
	       				cout << numbers[i][] << endl;
	       				uniques = true;
	       				break;
	       			}
	       			cout << i+1 << ": " << numbers[i] << endl;
	       		}

	       		if(uniques != true)
	       		{
	       			cout << 0 << endl;
	       		}
	       }
	}

	return 0;	
}
