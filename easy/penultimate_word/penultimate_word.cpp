// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Penultimate Word
// Challenge Link: https://www.codeeval.com/open_challenges/92/

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
	vector<string> words;
	file.open(argv[1]);
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       	   words.clear();
	       	   istringstream iss(lineBuffer);
	       	   string temp;

	       	   while(iss >> temp)
	       	   {
	       	   		words.push_back(temp);
	       	   }

	       	   for(int i = 0; i < words.size(); i++)
	       	   {
	       	   		if(i == words.size()-2)
	       	   		{
	       	   			cout << words[i] << endl;
	       	   		}
	       	   }
	       }
	}

	return 0;	
}
