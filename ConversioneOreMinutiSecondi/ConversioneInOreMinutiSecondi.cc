//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Conversione Secondi in Ore, Minuti e Secondi
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
	int sec_tot;
	
	cout << "Inserisci il valore dei secondi: ";
	cin >> sec_tot;

	cout << "L'orario in forma umana e': ";
	cout << (sec_tot/3600) << ":"; 
	cout << (sec_tot%3600)/60 << ":";
	cout << ((sec_tot%3600)%60) << endl;
	
	return 0;
}
