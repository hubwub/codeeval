// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Medium
// Challenge Description: Cash Register
// Challenge Link: https://www.codeeval.com/open_challenges/54/

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
	vector<string> output;
	file.open(argv[1]);
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       	   output.clear();
	       	   replace(lineBuffer.begin(), lineBuffer.end(), ';', ' ');
	       	   istringstream iss(lineBuffer);
	       	   
	       	   double price, cash;
	       	   iss >> price >> cash;

	       	   double change = cash - price;

	       	   if(change < 0)
	       	   {
	       	   		cout << "ERROR" << endl;
	       	   } 
	       	   else if(change == 0)
	       	   {
	       	   		cout << "ZERO" << endl;
	       	   }
	       	   else
	       	   {
	       	   		while(1)
	       	   		{
	       	   			if(change >= 100)
	       	   			{
	       	   				change -= 100;
	       	   				output.push_back("ONE HUNDRED");
	       	   			}
	       	   			else if(change >= 50)
	       	   			{
	       	   				change -= 50;
	       	   				output.push_back( "FIFTY");
	       	   			}
	       	   			else if(change >= 20)
	       	   			{
	       	   				change -= 20;
	       	   				output.push_back( "TWENTY");
	       	   			}
	       	   			else if(change >= 10)
	       	   			{
	       	   				change -= 10;
	       	   				output.push_back( "TEN");
	       	   			}
	       	   			else if(change >= 5)
	       	   			{
	       	   				change -= 5;
	       	   				output.push_back( "FIVE");
	       	   			}
	       	   			else if(change >= 2)
	       	   			{
	       	   				change -= 2;
	       	   				output.push_back( "TWO");
	       	   			}
	       	   			else if(change >= 1)
	       	   			{
	       	   				change -= 1;
	       	   				output.push_back( "ONE");
	       	   			}
	       	   			else if(change >= 0.5)
	       	   			{
	       	   				change -= .5;
	       	   				output.push_back( "HALF DOLLAR");
	       	   			}
	       	   			else if(change >= 0.25)
	       	   			{
	       	   				change -= 0.25;
	       	   				output.push_back( "QUARTER");
	       	   			}
	       	   			else if(change >= 0.1)
	       	   			{
	       	   				change -= 0.1;
	       	   				output.push_back( "DIME");
	       	   			}
	       	   			else if(change >= 0.049)
	       	   			{
	       	   				change -= 0.05;
	       	   				output.push_back( "NICKEL");
	       	   			}
	       	   			else if(change >= 0.009)
	       	   			{
	       	   				change -= .01;
	       	   				output.push_back( "PENNY");
	       	   			}
	       	   			else
	       	   			{
	       	   				break;
	       	   			}
	       	   		}

	       	   		for(int i = 0; i < output.size(); ++i)
	       	   		{
	       	   			if(i > 0) cout << ",";
	       	   			cout << output[i];
	       	   		}

	       	   		cout << endl;
	       	   } 

	       }
	}

	return 0;	
}
