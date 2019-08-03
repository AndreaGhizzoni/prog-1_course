#ifndef LIBMATRIX
#define LIBMATRIX

int** allocca_matrice( int, int );
int** somma_matrici( int**, int**, int, int );
void stampa_matrice( int**, int, int );
void deallocca_matrice( int**, int, int );
int** ottieni_dati( int, int );

#endif