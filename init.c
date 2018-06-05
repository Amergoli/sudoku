


#include<stdio.h>
#include<string.h>
#include "header.h"


/**
* Schreibt eine Zahl „szahl“ in das Feld „fobject“ an die Stelle des „Index“.
*
* @param fobject ist das Sudoku.
* @param index ist der Index der Stelle im Sudoku, in der eine Zahl geschrieben wird.
* @param szahl ist die Zahl, die an diese Stelle vom Index geschrieben wird.
*/


void init(int fobject[], int index, int szahl)
{
	
		fobject[index] = szahl;
	
}



