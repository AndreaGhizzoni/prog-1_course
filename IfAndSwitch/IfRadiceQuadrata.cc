//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Radice Quadrata
//	Data	: 10/10/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cmath>
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	double a;
	cout << "Inserire un numero per farne la radice quadrata: " ;
	cin >> a;

	if( a < 0 )
		cout << "ERRORE: Il numero introdotto non puo' essere negativo." << endl;
	else
		cout << "La radice quadrata di " << a << " e' " << sqrt( a ) << endl;	

	return 0;
}
