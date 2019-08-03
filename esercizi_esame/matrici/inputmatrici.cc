#include <iostream>
#include "inputmatrici.h"

int** alloca_matrice( int righe, int colonne ){
	int** matrice = new int*[righe];
	for( int i=0; i<righe; i++ )
		matrice[i] = new int[colonne];
	return matrice;
}

int** calcola_matrice( int** m1, int** m2, int righe , int colonne ){
	int** m = alloca_matrice( righe, colonne );
	for( int i=0; i<righe; i++ )
		for( int j=0; j<colonne; j++ )
			m[i][j] = m1[i][j]+m2[i][j];
	return m;
}

void stampa_matrice( int** matrice, int righe, int colonne ){
	for( int i=0; i<righe; i++ ){
		for( int j=0; j<colonne; j++ )
			std::cout << matrice[i][j] << " ";
		std::cout << std::endl;
	}
}

void dealloca_matrice( int** matrice, int righe, int colonne ){
	for( int i=0; i<righe; i++ )
		delete[] matrice[i];
	delete[] matrice;
}

int** input_matrice( int righe, int colonne ){
	int ** m = alloca_matrice( righe, colonne );
	for( int i=0; i<righe; i++ ){
		for( int j=0; j<colonne; j++ ){
			std::cout << "["<<i<<"]["<<j<<"] -> ";
			std::cin >> m[i][j];
		}
	}
	return m;
}