// CodeEval
// Anne Celestino - hubwub
// Challenge Level: Easy
// Challenge Description: File Size
// Challenge Link: https://www.codeeval.com/open_challenges/26/

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
	FILE* file;

	file = fopen(argv[1], "rb");

	fseek(file, 0, SEEK_END);

	int file_size = ftell(file);

	fclose(file);

	cout << file_size << endl;
}