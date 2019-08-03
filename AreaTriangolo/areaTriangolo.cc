//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Area del Triangolo
//	Data	: 26/06/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;




//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	int base, altezza = 0;
	float area = 0.0;

	cout << "Programma per calcolare l'area del Triangolo" << endl << endl;
	
	cout << "Inserisci il valore di base: ";	
	cin >> base;
	cout << "Inserisci il valore dell'altezza: ";
	cin >> altezza;
	
	area = (base*altezza)/2.0;

	cout << "L'area del Triangolo di base " << base << " e di altezza " << altezza << " e' " <<
area << endl;
	
	return 0;
}
