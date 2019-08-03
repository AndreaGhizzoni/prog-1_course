//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Conversione Ore, Minuti e Secondi in Secondi
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
	int ore, min, sec;
	
	cout << "Inserisci il valore delle ore: ";
	cin >> ore;

	cout << "Inserisci il valore dei minuti: ";
	cin >> min;
	 	
	cout << "Inserisci il valore dei secondi: ";
	cin >> sec;

	cout << "il totale dei secondi e': " << (ore * 3600) + (min * 60) + sec << endl;

	return 0;
}
