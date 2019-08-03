using namespace std;
#include <iostream>
#include <string>

class Book{
    private:
        const string &author = NULL;        
        const string &title = NULL;
        const long isbn = -1;

    public:
        Book();
        Book( string &title, string &author, long isbn );
        ~Book();
        void setTitle( string &title );
        void setAuthor( string &author );
        void setISBN( long isbn );
        string getTitle();
        string getAuthor();
        long getISBN();
};

Book::Book(){
    //author = NULL;
    //title = NULL;
    //isbn = -1;
}

Book::Book( string &title, string &author, long isbn ){
    title = title;
    author = author;
    isbn = isbn;
}

Book::~Book(){
    delete this;
}

void Book::setTitle( string &title ){ title = title; }
void Book::setAuthor( string &author ){ author = author; }
void Book::setISBN( long isbn ){ isbn = isbn; }

string Book::getTitle(){ return title; }
string Book::getAuthor(){ return author; }
long Book::getISBN(){ return isbn; }
