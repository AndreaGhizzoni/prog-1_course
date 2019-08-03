using namespace std;
#include <iostream>

bool array_palindromo( int* array, int dim );
bool array_palindromo_R( int* array, int p1, int p2 );

int main( int argc, char** argv )
{
	int dim;
	cout << "Quanti numeri vuoi inserire? ";
	cin >> dim;

	int* array = new int[ dim ];

	for( int i=0; i<dim; i++ )
	{
		cout << endl;
		cout << "Inserisci il " << (i+1) << " valore: ";
		cin >> array[i];		
	}

	cout << "L' array " << ( array_palindromo(array, dim) ? "e'": "NON e'" ) << " palindromo." << endl;
	return 0;
}

bool array_palindromo( int* array, int dim )
{
	return array_palindromo_R( array, 0 , dim-1 );
}


bool array_palindromo_R( int* array, int p1, int p2 )
{
	/*
	if( p1 > p2 )
		return true;
	else
		if( array[p1] != array[p2] ) 
			return false;
		else	
			return array_palindromo_R( array, p1+1, p2-1 );		
	*/

	if( array[p1] != array[p2] )
		return false;
	else
		if( p1 >= p2 )
			return true;
		else
			return array_palindromo_R( array, p1+1, p2-1 );
}	