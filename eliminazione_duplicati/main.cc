#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char* STOP = "000000";

int main( int argc, char** argv )
{
	if( argc != 3 )
	{
		cout << "Arguments requaired: 3" << endl;
		return 1;
	}

	fstream in, out;
	in.open( argv[1], ios::in );
	out.open( argv[2], ios::out );

	char line[256];
	char buffer2[256];

	strcpy( buffer2, STOP );
	while( in.getline( line, 256, '\n' ) && (strcmp(line, STOP) != 0) )
	{
		if( strcmp(line, buffer2) != 0 )
		{
			out << line << endl;
			strcpy( buffer2, line );
		}		
	}

	in.close();
	out.close();

	return 0;
}