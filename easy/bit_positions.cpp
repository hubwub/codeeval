// CodeEval
// Anne Celestino - hubwub
// Challenge Level: 19
// Challenge Description: Bit Positions
// Challenge Link: https://www.codeeval.com/open_challenges/19/

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
	vector<int> num;
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
	       	   replace(lineBuffer.begin(), lineBuffer.end(), ',', ' ');
	       	   istringstream iss(lineBuffer);
	       	   long long n;
	       	   int x, y;
	       	   iss >> n >> x >> y;
	       	   
	       	   if( (((n&(1 << (x-1))) > 0) && ((n&(1 << (y-1))) > 0)) || (((n&(1 << (x-1))) == 0) && ((n&(1 << (y-1))) == 0)))
	       	   {
	       	   		cout << "true" << endl;
	       	   }
	       	   else
	       	   {
	       	   		cout << "false" << endl;
	       	   }
	       }
	}

	return 0;	
}
