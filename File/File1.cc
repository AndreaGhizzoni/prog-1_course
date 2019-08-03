//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: lettura da file
//	Data	: 21/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main( int argc, char** argv ) 
{
	char* textFile = argv[1];
	char* word = argv[2];

	char tmp[50];
	int count = 0;

	fstream in, out;
	
	in.open( textFile, ios::in );
	out.open( textFile, ios::out | ios::app );
	
	in >> tmp;
	while( !in.eof() )
	{
		if( strcmp( tmp, word ) == 0 )
			count++;
		in >> tmp;		
	}

	out << "Il numero di occeorrenze sul file e': " << count << endl;
	cout << "Done." <<  endl;

	in.close();
	out.close();
	return 0;
}
