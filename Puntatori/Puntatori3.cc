//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: con puntatori e piu' funzioni
//	Data	: 14/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cmath>
using namespace std;


double sqrt2( double* );
double sqrt3( double* );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	double d;
	cout << "Introdurre un valore: " ;
	cin >> d;

	//cout << endl << &d << endl << endl;

	cout << "La radice quadrata e': " << sqrt2( &d ) << endl;
	cout << "La radice cubica e': " << sqrt3( &d ) << endl;
	return 0;
}

double sqrt2( double* number )
{
	if( *number < 0 )
		return 0;
	else
		return sqrt( *number );
}

double sqrt3( double* number )
{
	if( *number < 0 )
		return 0;
	else
		return pow( *number, (1.0/3.0) );
}