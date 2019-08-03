//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: allocazione dinamica con investione di parola.
//	Data	: 30/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cstring>
using namespace std;

void stampa_contratio( char * p );

//=======================================================================//
// Main
//=======================================================================//
int main( int argc, char** argv ) 
{
	char tmp[256];

	cout << "Inserisci una parola [exit per finire]: ";
	cin >> tmp;

	while( strcmp( tmp, "exit" ) != 0 )
	{
		int dim = strlen( tmp );
		char *parola = new char[dim+1];
		strcpy( parola, tmp );
		
		stampa_contratio( parola );
		
		cout << endl;
		delete[] parola;

		cout << "Inserisci una parola [exit per finire]: ";
		cin >> tmp;		
	}

	return 0;
}

void stampa_contratio( char * p )
{
	if( *p == '\0' )
	{
		return;
	}
	else
	{
		stampa_contratio( p+1 );
		cout << *p;
	}
}