#include <iostream>

using namespace std;

class Computer{
    private:
        int processorspeed;
        int* lol;

    public:	  
	    Computer();// Constructor
	    ~Computer();// Destructor
	    void setSpeed ( int p );
    	int getSpeed();
        void printLOL();
};

Computer::Computer(){
    processorspeed = 0;
    lol = new int[1000];
}

Computer::~Computer(){}

void Computer::setSpeed ( int p ){
    processorspeed = p;
}

int Computer::getSpeed(){
    return processorspeed;
}

void Computer::printLOL(){
    for( int i=0; i<1000; i++ ){
        std::cout << lol[i] << " ";
    }
    std::cout << endl;
}

