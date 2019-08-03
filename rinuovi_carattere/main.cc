#include <iostream>
#include <cstring>

using namespace std;

char* removeChar( char* word, char toRemove, int & ntimes );

int main( int argc, char** argv )
{
	int WORD_DIM = 256;
	char* word = new char[WORD_DIM];
	char toRemove;
	int times = 0;

	cout << "Insert a word ( max " << WORD_DIM << " characters ):" << endl;
	cin.getline( word, WORD_DIM );

	cout << "Insert the char to remove: ";
	cin >> toRemove;

	cout << "String without '" << toRemove << "' "
		 << "is: " << removeChar( word, toRemove, times );
	cout << " and has been removed " << times << " times." << endl;

	delete[] word;
	return 0;
}

char* removeChar( char* word, char toRemove, int & ntimes )
{
	int dim = strlen(word);
	char* c = new char[dim+1];

	int j = 0;
	for( int i=0; i<dim; i++ )
	{		
		if( word[i] != toRemove )
			c[j++] = word[i];
		else
			ntimes += 1;
	}
	return c;
}