

#include<stdlib.h>
#include<stdio.h>
#include "header.h"
/**
* Mit dieser Funktion wird ermittelt, ob die Vorgaben in einer Zeile gueltig sind oder nicht.
* Das heißt es wird geprüft, ob in der Sudoku Schablone Fehler sind wie z.B zwei 5er in einer Zeile
*
* @param feld[] ist das Sudoku.
* @param index ist der Index der Stelle im Sudoku, die ermittelt werden soll.
* @param wert ist der Integerwert an der Stelle vom index.
* @return k, zeigt an wie oft dieser Integerwert in einer Zeile vorkommt.
*/

int ZeileGultigkeit(int feld[], int index, int Wert)
{
	int i, j, j1, feldNum = 0, temp = 0, an, end, *x, *y, X1 = 0, Y1 = 0, k = 0;
	int in = Wert;  
	x = &X1;
	y = &Y1;
	
	an = index - (index % 9);
	end = an + 8;

	for (i = an; i <= end; i++)
	{
		if (feld[i] == Wert && k < 2)
		{
			k++;
		}

	}
	return k;
}


