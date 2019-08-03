//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Area e Perimetro del Cerchio
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
	int raggio; 
	float area, perimetro = 0.0;
	const float pi = 3.14;

	cout << "Programma per calcolare l'area e il perimetro del Cerchio" << endl << endl;
	
	cout << "Inserisci il valore del ragio: ";	
	cin >> raggio;

	area = pi*(raggio*raggio) ;
	perimetro = 2*pi*raggio;

	cout << "L'area del Cerchio e' " << area << endl;
	cout << "Il Perimetro del Cerchio e' " << perimetro << endl;
	return 0;
}
