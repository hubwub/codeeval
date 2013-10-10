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
	   		cout << "ALL PEERS START SEEDING AT MIDNIGHT KTHXBAI" << endl;
	   	    		break;
	   }
	}
	
	return 0;
}
