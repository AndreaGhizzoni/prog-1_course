//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Criptazione Carattere
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
	const int  cript = 45; 
	char carattere;	

	cout << "Inserisci il carattere da criptare: ";
	cin >> carattere;

	carattere += cript;

	cout << "Il Carattere criptato e': " << carattere << endl; 	

	carattere -= cript;

	cout << "Il Carattere decriptato e': " << carattere << endl;

	return 0;
}
