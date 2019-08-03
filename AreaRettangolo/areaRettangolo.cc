//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Area del Rettangolo
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

	cout << "Programma per calcolare l'are del rettangolo" << endl << endl;
	
	cout << "Inserisci il valore di base: ";	
	cin >> base;
	cout << "Inserisci il valore dell'altezza: ";
	cin >> altezza;
	
	cout << "L'area del rettangolo di base " << base << " e di altezza " << altezza << " e' " <<
base*altezza << endl;
	
	return 0;
}
