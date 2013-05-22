// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Beautiful Strings
// Challenge Link: https://www.codeeval.com/open_challenges/83/

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
	vector<int> alphabet;
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       		alphabet.clear();
	       		alphabet.resize(26);
	       		transform(lineBuffer.begin(), lineBuffer.end(), lineBuffer.begin(), ::tolower);
	      		int sum = 0;
	      		
      			for(int i = 0; i < lineBuffer.size(); ++i)
      			{
	      			if(lineBuffer[i] >= 'a' && lineBuffer[i] <= 'z')
	      			{
	      				 alphabet[lineBuffer[i]-'a']++;
	      			}
	      			else
	      			{
	      				;
	      			}
      			}

      			sort(alphabet.rbegin(), alphabet.rend());
      	
      			for(int i = 0; i < alphabet.size(); ++i)
      			{
      				if(alphabet[i] == 0)
      				{
      					break;
      				}
      				else
      				{
      					sum += alphabet[i]*(26-i);
      				}
      			}

      			cout << sum << endl;
	       }
	}

	return 0;	
}
