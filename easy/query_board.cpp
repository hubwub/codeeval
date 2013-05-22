// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Query Board
// Challenge Link: https://www.codeeval.com/open_challenges/87/

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
	int board[256][256];

	for(int i = 0; i < 256; ++i)
	{
		for(int j = 0; j < 256; ++j)
		{
			board[i][j] = 0;
			//cout << i << " " << j << "=" << board[i][j] << endl;
		}
	}

	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       	   istringstream iss(lineBuffer);
	       	   string cmd;
	       	   int pos, val, sum;
	       	   while(iss >> cmd >> pos)
	       	   {
	       	   		iss >> val;

	       	   		if(cmd == "SetRow")
	       	   		{
	       	   			for(int i = 0; i < 256; ++i)
	       	   			{
	       	   				board[pos-1][i] = val;
	       	   			}	       	   			}
	       	   		}
	       	   		else if(cmd == "SetCol")
	       	   		{
	       	   			for(int i = 0; i < 256; ++i)
	       	   			{
	       	   				board[i][pos-1] = val;
	       	   			}
	       	   		}
	       	   		else if(cmd == "QueryRow")
	       	   		{
	       	   			for(int i = 0; i < 256; ++i)
	       	   			{
	       	   				sum += board[pos-1][i];
	       	   			}
	       	   			cout << sum << endl;
	       	   		}
	       	   		else if(cmd == "QueryCol")
	       	   		{
	       	   		
	       	   			for(int i = 0; i < 256; ++i)
	       	   			{
	       	   				sum += board[i][pos-1];
	       	   			}
	       	   			cout << sum << endl;
	       	   		}
	       	   		else
	       	   		{
	       	   			;
	       	   		}
	    
	       	   		val = 0;
	       	   		sum = 0;
	       	   }
	       }
	}

	return 0;	
}
