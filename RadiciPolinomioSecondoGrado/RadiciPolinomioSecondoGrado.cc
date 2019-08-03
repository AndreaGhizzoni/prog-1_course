//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Programma per calcolare le radici di un polinomio di secondo grado
//	Data	: 03/10/2012
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
	int coefA, coefB, coefC;
	float radice1, radice2;
	
	cout << endl << "Programma per calcolare le radici di un polinomio di secondo grado" << endl;
	
	cout << "Inserisci il valore del coefficiente del termine di secondo grado: ";
	cin >> coefA;

	cout << "Inserisci il valore del coefficiente del termine di primo grado: ";
	cin >> coefB;

	cout << "Inserisci il valore del coefficiente del termine di grado nullo: ";
	cin >> coefC;

	radice1 = (-coefB + ( sqrt(pow(coefB, 2)- 4*coefA*coefC)) )/2.0*coefA;
	radice2 = (-coefB - ( sqrt(pow(coefB, 2)- 4*coefA*coefC)) )/2.0*coefA;

	cout << "Le radice sono: " << radice1 << " e " << radice2 << endl;
	return 0;
}
