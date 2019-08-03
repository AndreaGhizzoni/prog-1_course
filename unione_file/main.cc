using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

int main( int argc, char** argv )
{
	if( argc < 3 )
	{
		cout << "Invalid argument." << endl;
		return 1;
	}

	fstream in1, in2, out;
	in1.open( argv[1], ios::in );
	in2.open( argv[2], ios::in );
	out.open( argv[3], ios::out );

	char tmp[50];
	char tmp2[50];

	while( !in1.eof() && !in2.eof() )
	{
		in1 >> tmp;
		in2 >> tmp2;
		out << tmp << " " << tmp2 << " ";
	}

	if( in1.eof() )
		while( !in2.eof() )
		{
			in2 >> tmp;
			out << tmp << " ";
		}
	
	if( in2.eof() )
		while( !in1.eof() )
		{
			in1 >> tmp;
			out << tmp << " ";
		}


	in1.close();
	in2.close();
	out.close();
	return 0;
}