using namespace std;

#include <iostream>
#include "computer.cc"

int main( int argc, char** argv ){

    Computer* computer = new Computer();
    computer->setSpeed ( 100 ); 
    cout << computer->getSpeed() << endl;
    computer->printLOL();
    return 0;
}
