// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: Calculate Distance
// Challenge Link: https://www.codeeval.com/open_challenges/99/

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
	       	   	float x1, x2, y1, y2, d, x_total, y_total, x_pow, y_pow;
	       	   	int d_int;

	       	   	iss >> x1 >> y1 >> x2 >> y2;

	       	 	x_total = x2 - x1;
	       	 	x_pow = x_total * x_total;

	       	 	y_total = y2 - y1;
	       	 	y_pow = y_total * y_total;

	       	 	d = sqrt(x_pow + y_pow);

	       	 	d_int = d;

	       	 	cout << d_int << endl;
	       }
	}

	return 0;	
}
