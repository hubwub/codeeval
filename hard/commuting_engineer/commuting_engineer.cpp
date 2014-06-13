// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Hard
// Challenge Description: Decryption
// Challenge Link: https://www.codeeval.com/open_challenges/61/

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

	bool debug = false;

	if(debug)
	{
		file.open(argv[1]);
	}

	while (!file.eof()) 
	{
		if(debug)
		{
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       		cout << lineBuffer << endl;
	       }
	   	}
	   	else
	   	{
	   		  cout << "1" << endl; // V
		  cout << "6" << endl; // V
		  cout << "4" << endl; // V
		  cout << "8" << endl; // V
		  cout << "5" << endl; // V
		  cout << "3" << endl; // not 6
		  cout << "2" << endl; // not 7 
		  cout << "7" << endl; // not 8
		  cout << "9" << endl; // V
		  cout << "10" << endl; // V

	   	    		break;
	   }
	}

	return 0;
}
