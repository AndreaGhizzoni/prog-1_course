//=======================================================================//
//=======================================================================//
//	Author	: Andrea Ghizzoni
//	Title	: Definizione di minimoLib.h
//	Data	: 24/10/2012
//=======================================================================//
//=======================================================================//

#include "minimoLib.h"

int Minimo( int n1, int n2 )
{
	if( n1 <= n2 )
		return n1;
	else
		return n2; 
}