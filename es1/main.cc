#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main( int argc, char** argv )
{
	if( argc != 4 )
	{
		cout << "Aruments not valid." << endl;
		return 1;
	}

	int maxLenght = atoi( argv[3] );

	fstream in, out;
	in.open( argv[1], ios::in );
	if( in.fail() )
	{
		cout << "fail to open first file." << endl;
		return 1;
	}

	out.open( argv[2], ios::out );
	if( in.fail() )
	{
		cout << "fail to open second file." << endl;
		return 1;
	}

	char tmp;
	int counter = 0;
	bool finish = false;
	in.get( tmp );
	while( !in.eof() && (!finish) )
	{		
		if( tmp >= 'A' && tmp <= 'Z')
			tmp = tmp - ('A'-'a');

		if( counter == maxLenght )
		{
			finish = true;
		}
		else
		{
			out.put( tmp );
			counter++;
			in.get( tmp );
		}
	}

	in.close();
	out.close();
	return 0;
}