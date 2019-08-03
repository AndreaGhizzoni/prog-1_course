#include "libmatrix.h"
#include <iostream>

using namespace std;

int main( int argc, char** argv )
{
	int r, c;
	cout << "Inserire le righe e le colonne delle matrici da sommane: ";
	cin >> r >> c;

	int** m1 = ottieni_dati( r, c );
	int** m2 = ottieni_dati( r, c );

	cout << endl << "Prima matrice: " << endl;
	stampa_matrice( m1, r, c );
	cout << "====================================" << endl;

	cout << endl << "Seconda matrice: " << endl;
	stampa_matrice( m2, r, c );
	cout << "====================================" << endl;

	int** res = somma_matrici( m1, m2, r, c );

	cout << endl << "Matrice Somma: " << endl;
	stampa_matrice( res, r, c );
	cout << "====================================" << endl;

	deallocca_matrice( m1, r, c );
	deallocca_matrice( m2, r, c );
	return 0;
}