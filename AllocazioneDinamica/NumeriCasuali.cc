//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Numeri casuali con allocazione dinamica.
//	Data	: 30/11/2012
//=======================================================================//
//=======================================================================//

#include <iostream>
#include <cstdlib>
using namespace std;

int * crea_vettore( int dim, int minRange, int maxRange );
void stampa_vettore( int* vet ,int dim );
int prodotto_scalare( int * vetA, int * vetB, int dim );


//=======================================================================//
// Main
//=======================================================================//
int main( int argc, char** argv ) 
{
	srand( time(0) );
	int dim;

	cout << "Inserisci la dimensione dei vettori [0 per uscire]: " ;
	cin >> dim;

	while( dim != 0 )
	{
		int * vet1 = crea_vettore( dim, 1 , 1000 );
		int * vet2 = crea_vettore( dim, 23, 5664 );

		stampa_vettore( vet1, dim );
		stampa_vettore( vet2, dim );

		cout << "Il prodotto scalare e': " << prodotto_scalare( vet1, vet2, dim ) << endl;

		delete[] vet1;
		delete[] vet2;

		cout << "Inserisci la dimensione dei vettori [0 per uscire]: " ;
		cin >> dim;		
	}
	return 0;
}


int *  crea_vettore( int dim, int minRange, int maxRange )
{
	int * v = new int[ dim+1 ];

	for( int i = 0; i < dim ; i++ )
		*(v+i) = (rand()%maxRange)+minRange;

	return v;
}

void stampa_vettore( int* vet ,int dim )
{
	for( int i = 0; i < dim; i++ )
		cout << *vet+i << " ";
	cout << endl;
}

int prodotto_scalare( int * vetA, int * vetB, int dim )
{
	int count = 0;
	for( int i = 0; i < dim; i++ )
		count += (*vetA+i)*(*vetB+i);
	return count;
}