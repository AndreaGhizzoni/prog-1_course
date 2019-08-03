//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Funzioni Pari o Dispari
//	Data	: 24/10/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;

bool PariODispari( int numero );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	int numero;

	cout << "Introdurre un numero: ";	
	cin >> numero;
	bool prime = PariODispari( numero );

	cout << ( prime? "Il numero e' pari" : "Il numero non e' dispari.") << endl;

	return 0;
}

bool PariODispari( int numero )
{
	if( ( numero % 2 ) == 0 )
		return true;
	else
		return false; 
}