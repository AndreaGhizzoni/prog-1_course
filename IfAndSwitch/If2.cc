//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Test if 2
//	Data	: 10/10/2012
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
	cout << "Inserire un numero intero:" ;
	cin >> a;

	if( a > 5 )
		cout << "Il Numero e' maggiore di 5." << endl;	
	else if( a < 5 )
			cout << "Il Numero e' minore di 5." << endl;	
		else if( a == 5 )
				cout << "Il Numero e' uguale a 5." << endl;	

	return 0;
}
