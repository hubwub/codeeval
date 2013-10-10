// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy 
// Challenge Description: In this challenge you need to find the longest word in a sentence. If the sentence has more than one word of the same length you should pick the first one.
// Challenge Link:  https://www.codeeval.com/open_challenges/111/

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
	vector<string> words;
	bool longest;
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
								if(strlen(words[i]) < (strlen(words[i+1) != NULL))
								{
											cout << words[i] << endl;
								}
						}
	       }
	}

	return 0;	
}
