//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Giorni settimana 
//	Data	: 10/10/2010
//=======================================================================//
//=======================================================================//

#include <iostream>
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main () 
{
	int scelta;
	
	cout << "Inserire un numero intero da 0 a 6 per visualizzarne il giorno della settimana corrispondente" << endl;
	cin >> scelta;

	if( scelta  == 0 )
		cout << "Il Giorno scelto e' Lunedi'." << endl;
	else if( scelta  == 1 )
			 cout << "Il Giorno scelto e' Martedi'." << endl;
		 else if( scelta  == 2 )
			      cout << "Il Giorno scelto e' Mercoledi'." << endl;
			  else if( scelta  == 3 )
					   cout << "Il Giorno scelto e' Giovedi'." << endl;	
				   else if( scelta  == 4 )
						    cout << "Il Giorno scelto e' Venerdi'." << endl;
						else if( scelta  == 5 )
						    	 cout << "Il Giorno scelto e' Sabato." << endl;	
							 else if( scelta  == 6 )
						    	 	  cout << "Il Giorno scelto e' Domenica." << endl;
							 else 	                			 
								 cout << "ERRORE: numero inserito non corretto." << endl;
	return 0;
}
