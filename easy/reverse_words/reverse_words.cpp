// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Reverse Words
// Challenge Link: https://www.codeeval.com/open_challenges/8/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	ifstream file;
	string lineBuffer;
	file.open(argv[1]);
	vector<string> table;
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       		istringstream iss(lineBuffer);
	       		table.clear();
	       		string temp;

	       		while(iss >> temp)
	       		{
	       			table.push_back(temp);
	       		}

	       		for(int i = table.size()-1; i >= 0; --i)
	       		{
	       			cout << table[i] << " ";
	       		}
	       		cout << endl;
	       }
	}
	return 0;	
}
