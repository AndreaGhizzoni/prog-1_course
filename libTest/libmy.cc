using namespace std;
#include "libmy.h"
#include <iostream>
#include <fstream>

void appendOnFile( char* toWrite, char* fname )
{
	fstream file;
	file.open( fname, ios::out | ios::app );
	if( file.fail() )
	{
		cout << "Errore durante l'apertura del file." << endl;
		return;
	}
	
	file << toWrite << "\n";
	file.close();
}


void readFile( char* fname )
{
	fstream file;
	file.open( fname, ios::in );
	if( file.fail() )
	{
		cout << "Errore durante l'apertura del file." << endl;
		return;
	}

	int streamSize = 256;
	char* line = new char[streamSize];

	file.getline( line, streamSize, ';' );
	while( !file.eof() )
	{
		cout << line;
		file.getline( line, streamSize, ';' );
	}

	file.close();
	delete[] line;		
}