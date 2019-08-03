//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Prova di switch 2
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
		case 0: 
		case 1: 				
		case 2:	
		case 3: 
		case 4: cout << "Hai inserito un giorno feriale." << endl;
				break;
		case 5:				
		case 6: cout << "Hai inserito un giorno festivo" << endl;
				break;
		default:cout << "valore inserito errato" << endl;
	}
	return 0;
}
