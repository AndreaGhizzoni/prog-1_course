using namespace std;
#include <iostream>
#include <cstring>
#include "libmy.h"

int main( int argc, char** argv )
{
	if( argc != 2 )
	{
		cout << "Invalid arguments." << endl;
		return 1;
	}

	char* fname = argv[1];
	int opp = 0;	

	while( opp != 3 )
	{
		cout << "Opzioni: " << endl;
		cout << "1. scrivi su file" << endl;
		cout << "2. leggi da file" << endl;
		cout << "3. esci." << endl;
		cout << "> ";
		cin >> opp;
		//cin.flush();

		switch( opp )
		{
			case 1:
			{
				char* toWrite = new char[256];
				cout << "Inserire il testo da scrivere su file. Terminare la parola con ';'" << endl;
				cin >> toWrite;
				//cin.getline( toWrite, 256 );
		
				appendOnFile( toWrite, fname );

				cout << "Scrittura completata!" << endl;
				delete[] toWrite;
				break;
			}

			case 2:
			{
				cout << "Contenuto del file: " << endl;
				readFile( fname );

				cout << endl << "Lettura completata!" << endl;
				break;
			}

			case 3: {cout << "Goodbye!" << endl; break;}
			default:{cout << "Scelta non valida" << endl;break;}
		}

		cout << endl << endl << "================================================" << endl;
	}

	return 0;
}