//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Inverti Stringa con ricorsione.
//	Data	: 21/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cstring>
using namespace std;

void inverti( char s[], int index );

//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	char s[50];

	cout << "Inserisci una stringa [max 50]: " ;
 	cin >> s;
	
	cout << "Stringa Invertita: " ;
	inverti( s , 0 );
	cout << endl;
 	
	return 0;
}


void inverti( char s[], int index )
{
	if( s[index] == '\0' )
	{
		return;		
	}
	else
	{
		inverti( s, index+1 );
		cout << s[index];
	}
}
