using namespace std;

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>


int main( int argc, char** argv ){

	if( argc != 5 ){
		cout << "Argomenti non validi.";
		return 1;
	}

	fstream in, out;
	in.open( argv[1], ios::in );
	out.open( argv[1], ios::out | ios:: app );
	if( in.fail() ){
		cout << "errore nell'apertura del file.";
		return 1;
	}

	char* provincia = argv[2];
	int anno = atoi( argv[3] );
	char* marca = argv[4];

	int num_auto_in_provincia = 0;
	int num_auto_in_anno = 0;

	char curr_targa[9];
	char curr_provincia[3];
	int curr_anno;
	char curr_marca[25];
	char curr_nome[30];
	char curr_cognome[30];

	in >> curr_targa;
	while( !in.eof() ){
		strncpy( curr_provincia, curr_targa, 2 );
		curr_provincia[2] = '\0';

		char tmp[5];
		in >> tmp;
		curr_anno = atoi( tmp );

		in >> curr_marca;
		in >> curr_nome;
		in >> curr_cognome;	

		if( strcmp( curr_provincia, provincia )==0 ){
			num_auto_in_provincia++;
			
			if( curr_anno == anno ){
				num_auto_in_anno++;
			}

			if( strcmp( curr_marca, marca )==0 ){
				out << curr_targa << " " << 
				      curr_anno  << " " <<
				      curr_marca << " " <<
				      curr_nome << " " <<
				      curr_cognome << "\n";
			}
		}

		in >> curr_targa;
	}

	in.close();
	out.close();

	cout << "Il numero di automobili immatricolate nella provincia " << provincia
	     << " e’ " << num_auto_in_provincia << endl;
	cout << "Il numero di automobili immatricolate nella provincia " << provincia
		 << " nell’anno " << anno << " e’ " << num_auto_in_anno << endl;

	return 0;
}