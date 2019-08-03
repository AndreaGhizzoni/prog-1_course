//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Area del Trapezio
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
	int baseMag, baseMin, altezza = 0;
	float area = 0.0;

	cout << "Programma per calcolare l'area del Trapezio" << endl << endl;
	
	cout << "Inserisci il valore della base maggiore: ";	
	cin >> baseMag;
	cout << "Inserisci il valore della base minore: ";
	cin >> baseMin;
	cout << "Inserisci il valore dell'altezza: ";
	cin >> altezza;

	area = ((baseMag+baseMin)*altezza)/2.0;

	cout << "L'area del Trapezio e' " << area << endl;
	
	return 0;
}
