#include "libmatrix.h"
#include <iostream>

int** allocca_matrice( int righe, int colonne )
{
	int** matrix = new int*[righe];
	for( int i=0; i<righe; i++)
		matrix[i] = new int[colonne];
	return matrix;
}

int** somma_matrici( int** m1, int** m2, int righe, int colonne )
{
	int** res = allocca_matrice( righe, colonne );
	for( int i=0; i<righe; i++ )
	{
		for( int j=0; j<colonne; j++ )
		{
			res[i][j]=m1[i][j]+m2[i][j];
		}
	}
	return res;
}


void stampa_matrice( int** matrice, int righe, int colonne )
{
	for( int i=0; i<righe; i++ )
	{
		for( int j=0; j<colonne; j++ )
		{
			std::cout << matrice[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


void deallocca_matrice( int** matrice, int righe, int colonne )
{
	for( int i=0; i<righe; i++)
		delete[] matrice[i];
	delete[] matrice;
}


int** ottieni_dati( int righe, int colonne )
{
	std::cout << "======= Acquisizione matrice =======" << std::endl;
	int** m1  = allocca_matrice( righe, colonne );
	for( int i=0; i<righe; i++ )
	{
		for( int j=0; j<colonne; j++ )
		{
			std::cout << "Elemento ["<<i<<","<<j<<"] :"; 
			std::cin >> m1[i][j]; 
		}			
	}
	std::cout << "====================================" << std::endl;
	return m1;
}