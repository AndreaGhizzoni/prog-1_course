//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Da modificare con puntatori
//	Data	: 14/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cmath>
using namespace std;


double sqrt2( double );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	double d;
	cout << "Introdurre un valore: " ;
	cin >> d;

	cout << "La radice quadrata e': " << sqrt2( d ) << endl;
	return 0;
}

double sqrt2( double number )
{
	if( number < 0 )
	{
		return 0;
	}
	else
	{
		return sqrt( number );
	}
}
