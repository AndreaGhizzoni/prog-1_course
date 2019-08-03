using namespace std;

#include <iostream>
#include <string>
#include "Book.cc"

const int MAX_BOOKS_SAVED = 100;

int main( int argc, char** argv ){
    
    string a = "asd";
    string b = "ASD";
    Book* book = new Book( a, b, 10000 );
        
    cout << a << " " << book->getTitle() << endl;

    return 0;
}
