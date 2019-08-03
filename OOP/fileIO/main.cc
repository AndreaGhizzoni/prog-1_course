#include <iostream>
#include <fstream>
#include <exception>
#include "FileManager.cc"

using namespace std;

int main( int argc, char** argv )
{
	try
	{
		FileManager *f = new FileManager( "", ios::out );	
	
	}
	catch( exception &e )
	{
	 	cerr << "hello" << endl;
	}

	return 0;
};

