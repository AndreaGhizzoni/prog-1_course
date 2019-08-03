using namespace std;

#include <iostream>

char* getArrayFromUser( int );
void  printArray( char *, int );
void inverti( char*, int );
void inverti_ric( char*, int, int );


int main( int argc, char** argv ){

	int dim = 5;
	char* arrayToInvert = getArrayFromUser( dim );
	
	cout << endl << "Array inserito: ";
	printArray( arrayToInvert, dim );

	inverti( arrayToInvert, dim );

	cout << endl << "Array invertito: ";
	printArray( arrayToInvert, dim );
	return 0;
}


void inverti( char* array, int dim ){
	inverti_ric( array, dim-1, 0 );
}


void inverti_ric( char* array, int dim , int count ){
	if( count != dim ){
		char tmp = array[count];
		array[count] = array[dim];
		array[dim] = tmp;
		inverti_ric( array, --dim, ++count );
	}
	else{
		return;
	}
}


char* getArrayFromUser( int numberOfElement ){
	char * array = new char[numberOfElement];
	for( int i = 0; i<numberOfElement; i++ ){
		cout << "Inserisci il ["<<i<<"] carattere: ";
		cin.get( array[i] );
		cin.get();//skip the \n
	}
	return array;
}


void  printArray( char * array, int dim ){
	cout << "[ ";
	for( int i=0; i<dim; i++){
		if( i == dim-1 )
			cout << array[i];
		else
			cout << array[i]<<", ";
	}
	cout << " ]" << endl;
}