//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Inverti di variabili
//	Data	: 26/09/2012
//=======================================================================//
//=======================================================================//

#include <iostream> 
using namespace std;


//=======================================================================//
// Main
//=======================================================================//
int main()
{
	int a = 7;
	int b = 9;
	int c = 0;

	cout << "variabili prima dello scambio" << endl;
  	cout << "var a: " << a << endl;
	cout << "var b: " << b << endl;
	
	c = a;
	a = b;
	b = c;

	cout << "variabili dopo lo scambio" << endl;
  	cout << "var a: " << a << endl;
	cout << "var b: " << b << endl;

  	return 0;
}