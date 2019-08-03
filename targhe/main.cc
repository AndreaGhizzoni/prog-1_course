#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

const bool DEBUG = true;

int main( int argc, char** argv )
{
	if( argc != 5 )
	{
		cout << "Argomenti invalidi." << endl;
		return 1; 
	}

	fstream in, out;
	in.open( argv[1], ios::in );
	out.open( "out", ios::out | ios::app );

	char* p = argv[2];
	int a = atoi( argv[3] );
	char* m = argv[4];

	if(DEBUG)cout << p << " " << a << " " << m << endl;

	




	return 0;
}