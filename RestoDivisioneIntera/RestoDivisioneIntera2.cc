//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Resto divisione intera con puntatori.
//	Data	: 14/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;

void dividi( int a, int b, int* quoziente, int* resto );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	int a, b, quoziente, resto;
	cout << "Introdurre due numeri: ";
	cin >> a >> b;

	dividi( a,b, &quoziente, &resto );

	cout << "resto: " << resto << endl;
	cout << "quoziente: " << quoziente << endl;

	return 0;
}

void dividi( int a, int b, int* quoziente, int* resto )
{
	*quoziente = a/b;
	*resto = a % b;
}
