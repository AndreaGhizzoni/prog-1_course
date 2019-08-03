//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Prova di switch
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
	cout << "Inserisci il giorno della settiman: " ;
	cin >> a;

	switch( a )
	{	
		case 0: cout << "Lunedi'" << endl;
				break;
		case 1: cout << "Martedi'" << endl;
				break;
		case 2:	cout << "Mercoledi'" << endl;
				break;
		case 3: cout << "Giovedi'" << endl;
				break;
		case 4: cout << "Venerdi'" << endl;
				break;
		case 5: cout << "Sabato" << endl;
				break;
		case 6: cout << "Domenica" << endl;
				break;
		default:cout << "valore inserito errato" << endl;
	}
	return 0;
}
