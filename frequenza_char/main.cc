#include <iostream>
#include <cstring>

using namespace std;

int* getFrequencies( char* word );


int main( int argc, char** argv )
{
	int DIM_ARRAY = 256;
	char* word = new char[DIM_ARRAY];
	
	cout << "Insert a vord (max 256 characters): ";
	cin >> word;

	int* frequencies = getFrequencies( word );
	
	cout << "In given word there are: " << endl;
	char a = 'a';
	for( int i=0; i<26; i++ )
		cout << frequencies[i] << " characters " << a++ << endl;
	
	delete[] word;
	delete[] frequencies;
	return 0;
}


int* getFrequencies( char* word )
{
	int* f = new int[26];
	char letter = 'a';

	for( int j=0; j<26; j++ )
	{
		for( int i=0; i<strlen(word); i++ )
		{
			if( word[i] == letter )
				f[j]++;
		}
		letter++;
	}
	return f;
}