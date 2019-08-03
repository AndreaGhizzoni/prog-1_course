//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: con puntatori e piu' funzioni (variante di Puntatori3.cc) 
//	Data	: 14/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cmath>
using namespace std;


void sqrt2( double* );
void sqrt3( double* );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	double d;
	cout << "Introdurre un valore: " ;
	cin >> d;

	//cout << endl << &d << endl << endl;
	sqrt2( &d );
	//sqrt3( &d );

	cout << "La radice quadrata e': " << d << endl;
	//cout << "La radice cubica e': " << d << endl;
	return 0;
}

void sqrt2( double* number )
{
	if( *number < 0 )
		*number = 0;
	else
		*number = sqrt( *number );
}


void sqrt3( double* number )
{
	if( *number < 0 )
		*number = 0;
	else
		*number = pow( *number, (1.0/3.0) );
}