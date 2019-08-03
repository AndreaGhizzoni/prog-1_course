//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Inverti Stringa.
//	Data	: 21/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cstring>

using namespace std;

void inverti( char s[] );
int numOccorrenze( char s[], char d );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	char s[50];
	char d;

	cout << "Inserisci una stringa: ";
	cin >> s;

	inverti( s );
	
	cout << "Inserisci un carattere da contare nella stringa: " ;
	cin >> d;


	cout << "Stringa inveritita: " << s << endl;
	cout << "Il Numero di occorrenze e': " <<  ( numOccorrenze( s, d ) == 1 ? "Pari" : "Dispari" ) << endl;
	
	return 0;
}


void inverti( char s[] )
{
	int dim = strlen( s );
	cout << dim << endl;

	for( int i = 0; i<dim/2; i++ )
	{
		char tmp = s[i];
		s[i] == s[dim-1-i];
		s[dim-1-i] = tmp;
	}
	
	return;
}


int numOccorrenze( char s[], char d )
{
	int dim = strlen( s );
	int cout = 0;

	for( int i = 0; i<dim-1; i++ )
		if( s[i] == d ) cout++;

	//if( cout == 0 )

	if( (cout%2) == 0 )
		return 0;
	else
		return 1;
}