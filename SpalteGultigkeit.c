

#include<stdlib.h>
#include<stdio.h>
#include "header.h"

/**
* Mit dieser Funktion wird ermittelt, ob die Vorgaben in einer Spalte gueltig sind oder nicht.
* Das heißt es wird geprüft, ob in der Sudoku Schablone Fehler sind wie z.B zwei 5er in einer Spalte
*
* @param feld[] ist das Sudoku.
* @param index ist der Index der Stelle im Sudoku, die ermittelt werden soll.
* @param wert ist der Integerwert an der Stelle vom index.
* @return k, zeigt an wie oft dieser Integerwert in einer Spalte vorkommt.
*/
int SpalteGultigkeit(int feld[], int index, int Wert)
{
	int i, j, j1, feldNum = 0, temp = 0, an, end, *x, *y, X1 = 0, Y1 = 0, k = 0;
	int in = Wert;  // atoi(fobject[index].objekt)+1;   in ist die Zahl, die in Sudokoeingefuegt werden muss.
	x = &X1;
	y = &Y1;

	an = index % 9;
	end = 81 - (9 - an);

	for (i = an; i <= end; i = i + 9)
	{
		if (feld[i] == Wert && k < 2)
		{
			k++;
		}

	}
	return k;
}


