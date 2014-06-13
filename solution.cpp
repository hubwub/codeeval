#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace::std;


int main(int argc, char* argv[])
{
	ifstream file;

	string filename;
	string lineBuffer;

	bool test_flag = true; //test mode

	if (test_flag)
	{
	filename = argv[1];

	file.open(filename.c_str());
	}


	while (!file.eof())
	{

	  if (test_flag) // test mode
	  {
		getline (file,lineBuffer);

		 if (lineBuffer.length() == 0)
	           continue;
		 else
		 {

			 cout << lineBuffer << endl;
		 }
	  }
	  else // not test mode, put solution here
	  {
		
		 
		 cout << 4844 << endl;
		  
		
		  
		 
		  
		  break;  // solution ends here
	  }




	} // end while

	return 0;
}// end main

