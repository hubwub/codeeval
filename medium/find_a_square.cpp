// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Medium
// Challenge Description: Find a Square
// Challenge Link: https://www.codeeval.com/open_challenges/101/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	//Sample code to read in test cases:
	ifstream file;
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
	       		replace(lineBuffer.begin(), lineBuffer.end(), '(', ' ');
	       	   	replace(lineBuffer.begin(), lineBuffer.end(), ')', ' ');
	       	   	replace(lineBuffer.begin(), lineBuffer.end(), ',', ' ');
	       	   	istringstream iss(lineBuffer);
	       	   	float x1, x2, x3, x4, y1, y2, y3, y4;
	       	   	float x_pow, y_pow, x_total, y_total;
	       	   	float d1, d2, d3, d4;

	       	   	iss >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	       	   x_total = x2 - x1;
	       	   	x_pow = x_total * x_total;

	       	   	y_total = y2 - y1;
	       	   	y_pow = y_total * y_total;

	       	   	d1 = sqrt(x_pow + y_pow);

	       	   	//cout << "d1 = " <<  d1 << endl;

	       	   	x_total = y_total = x_pow = y_pow = 0;

				x_total = x3 - x2;
	       	   	x_pow = x_total * x_total;

	       	   	y_total = y3 - y2;
	       	   	y_pow = y_total * y_total;

	       	   	d2 = sqrt(x_pow + y_pow);	

	       	   	//cout << "d2 = " <<  d2 << endl;

	       	   	x_total = y_total = x_pow = y_pow = 0;	       	   	

	       	   	x_total = x4 - x3;
	       	   	x_pow = x_total * x_total;

	       	   	y_total = y4 - y3;
	       	   	y_pow = y_total * y_total;

	       	   	d3 = sqrt(x_pow + y_pow);

	       	   	//cout << "d3 = " <<  d3 << endl;

	       	   	x_total = y_total = x_pow = y_pow = 0;

	       	   	x_total = x4 - x1;
	       	   	x_pow = x_total * x_total;

	       	   	y_total = y4 - y1;
	       	   	y_pow = y_total * y_total;

	       	   	d4 = sqrt(x_pow + y_pow);

	       	   	//cout << "d4 = " <<  d4 << endl;

	       	   	if(d1 == d3 && d2 == d4)
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
