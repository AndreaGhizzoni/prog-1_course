//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Cili do while
//	Data	: 17/10/2010
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	char carattereDiUscita;
	do 
	{
		cout << "Inserire un carattere ( 'a' per uscire ): " << endl;
		cin >> carattereDiUscita;
	}
	while( carattereDiUscita != 'a' );

	return 0;
}