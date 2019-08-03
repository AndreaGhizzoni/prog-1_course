//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Conversione Da Carattere Maiuscolo a Minuscolo
//	Data	: 03/10/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	char carattere;

	cout << "Inserisci un carattere Maiuscolo: ";

	cin >> carattere;
	carattere += ('a'-'A');

	cout << "Il Carattere minuscolo corrispondente e': " << carattere << endl; 	

	return 0;
}
