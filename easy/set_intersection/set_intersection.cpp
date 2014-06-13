// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Set Intersection
// Challenge Link: https://www.codeeval.com/open_challenges/30/

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
	vector<int> set;
	file.open(argv[1]);
	while (!file.eof()) 
	   {
	       getline(file, lineBuffer);
	       if (lineBuffer.length() == 0)
	           continue; //ignore all empty lines
	       else 
	       {
	           //do something here
	       	    set.clear();
	       		istringstream iss(lineBuffer);
	       		string s1, s2;
	       		while(getline(iss, s1, ';'))
	       		{
	       			iss >> s2;
	       			replace(s1.begin(), s1.end(), ',', ' ');
	       			replace(s2.begin(), s2.end(), ',', ' ');
	       			istringstream iss_1(s1);
	       			istringstream iss_2(s2);
	       			int temp;
	       			int counter = 0; 

	       			while(iss_1 >> temp)
	       			{
	       				set.push_back(temp);
	       			}

	       			while(iss_2 >> temp)
	       			{
	       				if(find(set.begin(), set.end(), temp) != set.end())
	       				{
	       					if(counter == 0)
	       					{
	       						cout << temp;
	       						++counter;
	       					}
	       					else
	       					{
	       						cout << "," << temp;
	       					}
	       				}
	       			}

	       			cout << endl;
	       		}
	       }
	}

		return 0;	
}
