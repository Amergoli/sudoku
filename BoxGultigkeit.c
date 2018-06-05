

#include<stdlib.h>
#include<stdio.h>
#include "header.h"

/**
* Mit dieser Funktion wird ermittelt, ob die Vorgaben in einer Box gueltig sind oder nicht. 
* Das heißt es wird geprüft ob in der Sudoku Schablone Fehler sind wie z.B zwei 5er in einer Box
*
* @param feld[] ist das Sudoku.
* @param index ist der Index der Stelle im Sudoku, die ermittelt werden soll.
* @param wert ist der Integerwert an der Stelle vom index.
* @return k, zeigt an wie oft dieser Integerwert in einer Box vorkommt. 
*/

int BoxGultigkeit(int feld[], int index, int Wert)
{
	int i, j, j1, feldNum = 0, temp = 0, an, end, *x, *y, X1 = 0, Y1 = 0, k=0; 
	int in = Wert; 
	x = &X1;
	y = &Y1;
	an = BoxWerte(index, x, y);
	end = an + 20;
	for (i = X1; i <= X1 + 2; i++)
	{
		for (j1 = Y1; j1 <= Y1 + 2; j1++)
		{
			index = i * 9 + j1;
			if (feld[index] == Wert && k < 2)
			{
				k++;
			}
		}
	}
	return k;
}


