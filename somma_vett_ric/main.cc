#include <iostream>

using namespace std;

int* somma_array( int*, int*, int );
void somma_array_ric( int*, int*, int*, int, int );

int main( int argc, char** argv )
{
	int v1[] = { 1,2,3 };
	int v2[] = { 1,1,1 };

	int* res = somma_array( v1, v2, 3 );

	cout << "First vector [v1]: { ";
	for( int i=0; i<3; i++ ){
		cout << v1[i] << " ";
	}
	cout << "}" << endl;

	cout << "Second vector [v2]: { ";
	for( int i=0; i<3; i++ ){
		cout << v2[i] << " ";
	}
	cout << "}" << endl;

	cout << "v1 + v2 = { ";
	for( int i=0; i<3; i++ ){
		cout << res[i] << " ";
	}
	cout << "}" << endl;
	return 0;
}

int* somma_array( int* v1, int* v2, int dim )
{
	int* res = new int[dim];
	somma_array_ric( v1, v2, res, 0, dim );
	return res;
}

void somma_array_ric( int* v1, int* v2, int* res, int i, int dim )
{
	if( i != dim )
	{
		res[i] = v1[i]+v2[i];
		somma_array_ric( v1, v2, res, i+1, dim );
	}
	else
	{
		return;
	}
}