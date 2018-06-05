#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <time.h>
#include "Header.h"

/**
* NaviRechts ist zustaendig fuer die Navigation nach rechts.
*
* @param i ist der Index einer Leerstelle.
* @param feld[] enthaelt das Sudoku.
* @param leerPos[] enthaelt Indizes der Leerstellen.
* @return den Index der neuen Leerstelle.
*/

int NaviRechts(int i, int charakter, int leerPos[], int Anzahl0Element, int feld[])
{

	int xVal = 0, yVal, index, it, tempHor = -1;
	
	xVal = leerPos[i] / 9;
	xVal--;
	if (i < Anzahl0Element - 1)
	{
		showEntryList(feld, leerPos[++i]);
		GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);
	}
	else
	{
		i = 0;
		showEntryList(feld, leerPos[i]);
		GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);
	}
	return i;
}

