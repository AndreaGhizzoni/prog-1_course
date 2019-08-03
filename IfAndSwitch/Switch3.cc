//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Prova di switch 3
//	Data	: 17/04/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	int a;
	cout << "Inserisci il numero di un mese: " ;
	cin >> a;

	switch( a )
	{	
		case 0:
		case 3:
		case 5:
		case 7:
		case 9:
		case 12: cout << "Il mese inserito ha 31 giorni. " << endl;
				 break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10: cout << "Il mese inserito ha 30 giorni. " << endl;
				 break;
		case 1: cout << "Febbraio ha 28 giorni" << endl;
				break;
		default:cout << "valore inserito errato" << endl;
	}
	return 0;
}
