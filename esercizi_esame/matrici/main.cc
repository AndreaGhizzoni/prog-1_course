using namespace std;

#include <iostream>
#include "inputmatrici.h"

int main( int argc, char** argv ){

	int righe, colonne;

	cout << "Righe della matrice ? ";
	cin >> righe;

	cout << "Colonne della matrice ? ";
	cin >> colonne;

	cout << endl << "Inserisci gli elementi della prima matrice:" << endl;
	int ** m1 = input_matrice( righe, colonne );

	cout << endl << "Inserisci gli elementi della seconda matrice:" << endl;
	int ** m2 = input_matrice( righe, colonne );
	
	cout << endl;

	cout << "Matrice 1:" << endl;
	stampa_matrice( m1, righe , colonne );
	cout << endl;
	cout << "Matrice 2:" << endl;
	stampa_matrice( m2, righe , colonne );
	cout << endl;
	cout << "Matrice SOMMA:" << endl;
	stampa_matrice( calcola_matrice( m1, m2, righe, colonne ) , righe , colonne );
	cout << endl;

	dealloca_matrice( m1, righe, colonne );
	dealloca_matrice( m2, righe, colonne );
	return 0;
}