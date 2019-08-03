//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: trovare dato in array
//	Data	: 14/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;

bool appartieneA( char, char[], int );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	char caratteriProibiti[] = { 'q', 'Q', 'e', 'E' };
	char c;

	do
	{
		cout << "inserire un cararrere ( 'q' o 'e' per uscire): ";
		cin >> c;
		cout << "Codice ASCII di " << c << " = " << (int)c << endl << endl << endl;
	}while( !appartieneA( c, caratteriProibiti, 4 ) );	

	return 0;
}

bool appartieneA( char carattere, char vettore[], int dimensione )
{
	bool trovato = false;
	for( int i = 0; i < dimensione; i++ )
		if( vettore[i] == carattere )
			trovato = true;

	return trovato;
}

