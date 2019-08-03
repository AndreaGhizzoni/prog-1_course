//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Procedure 1
//	Data	: 24/10/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;

void stampaAsterisco();
void stampaTabulazione();

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	for( int i = 0; i<5; i++ )
	{
		for( int j = 0; j<5; j++ )
		{
			stampaAsterisco();
			stampaTabulazione();
		}
		cout << endl;
	}
	return 0;
}


void stampaAsterisco()
{
	cout << "*";
	return;
}

void stampaTabulazione()
{
	cout << "\t";
	return;
}
