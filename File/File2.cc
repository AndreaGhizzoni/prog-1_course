//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: lettura da file e creazione di file.
//	Data	: 21/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main( int argc, char** argv ) 
{
	if( argc != 4 )
	{
		cout << "Numero di parametri errato" << endl;
		return 1;
	}

	char* fileIn = argv[1];
	char word = argv[2][0];
	int n = atoi( argv[3] );
	char fileOut[50];

	cout << "Inserisci il nome del file su cui visualizzare il risultato [max 50] : ";
 	cin >> fileOut;

	fstream in, out;
	
	in.open( fileIn, ios::in );
	if( in.fail() )
	{
		cout << "errore durante l'apertura del file " << fileIn << endl;
		return 1;
	}

	out.open( fileOut, ios::out );
	if( out.fail() )
	{
		cout << "errore durante l'apertura del file " << fileOut << endl;
		return 1;
	}	
	

	char tmp[50];
	in >> tmp;
	while( !in.eof() )
	{
		in >> tmp;
		int count = 0;
		for( int i = 0; i<strlen(tmp) ;i++ )
		{
			if( tmp[i] == word )
				count++;
		}
		
		if( count >= n )
			out << tmp << endl;
	}



	in.close();
	out.close();
	return 0;
}
