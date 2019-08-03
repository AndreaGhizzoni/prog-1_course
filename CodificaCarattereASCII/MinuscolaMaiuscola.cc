//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Conversione Da Carattere minuscolo e Maiuscolo
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

	cout << "Inserisci un carattere: ";

	cin >> carattere;
	carattere -= ('a'-'A');

	cout << "Il Carattere maiuscolo corrispondente e': " << carattere << endl; 	

	return 0;
}
