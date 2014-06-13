// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Medium
// Challenge Description: Decimal to Binary
// Challenge Link: https://www.codeeval.com/open_challenges/27/

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
	file.open(argv[1]);
	vector<int> binary;
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       		binary.clear();
	       		int x, r, sum;
	       		int i = 1;
	       		istringstream iss(lineBuffer);
	       		iss >> x;
	       		
	       		while(x != 0)
	       		{
	       			r = x % 2;
	       			x = x / 2;
	       			binary.push_back(r);
	       		}

	       		reverse(binary.begin(), binary.end());

	       		for(int i = 0; i < binary.size(); ++i)
	       		{
	       			cout << binary[i];
 	       		}

 	       		cout << endl;
	       }
	}

	return 0;	
}
