#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <time.h>
#include "Header.h"
/**
* NaviDown ist zustaendig fuer die Navigation von oben nach unten.
*
* @param i ist der Index einer Leerstelle.
* @param feld[] enthaelt das Sudoku.
* @param leerPos[] enthaelt Indizes der Leerstellen.
* @return den Index der neuen Leerstelle.
*/

int NaviDown(int i, int charakter, int leerPos[], int feld[])
{
		int xVal = 0, yVal, index, it, tempHor = -1;
		xVal = leerPos[i] / 9;
		xVal++;
		if (xVal < 9)
		{
			yVal = leerPos[i] % 9;
			index = xVal * 9 + yVal;
			while (tempHor == -1)
			{
				for (it = 0; it < 81; it++)
				{
					if (leerPos[it] == index)
					{
						tempHor = it;
						break;
					}
				}
				if (tempHor == -1)
				{
					index++;
				}
			}
			i = tempHor;
			showEntryList(feld, leerPos[i]);
			GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);


			return i;
			
		}	
		showEntryList(feld, leerPos[i]);
		GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);

	return i;
}

