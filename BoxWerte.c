#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Header.h"

/**
* Diese Funktion ermittelt x und y vom übergebenen „index“ und gibt den Index vom Anfang der zugehörigen Box aus.
* Bsp. index ist 5 dann ist der Index vom Anfang der Box 3 und x wäre 0 und y wäre 3
* @param index ist Index einer Stelle des Sudokus.
* @param x ist X-wert des Anfangs.
* @param y Y-wert des Anfangs.
* @return an, enthält den Index vom Anfang der zugehörigen Box.
*/

int BoxWerte(int index, int *x, int *y)
{
	int indexpointer[81], an, X1, Y1;
	X1 = index / 9;
	Y1 = index % 9;
	X1 = X1 - (X1 % 3);//X des Anfags
	Y1 = Y1 - (Y1 % 3);//Y der Ende
	an = X1 * 9 + Y1;  //Index des Anfags
	*x = X1;
	*y = Y1;
	return an;
}