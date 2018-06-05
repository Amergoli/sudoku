

#include<stdlib.h>
#include<stdio.h>
#include "header.h"
/**
* Eine Box wird geprüft, ob die Zahl „anfang“ überhaupt in die freien Zellen der Box passt.
* wenn die Zahl Passt, so wird 1 ausgegeben, ansonsten - 1.
*
* @param fobject[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @param anfang ist die Zahl, fuer sie im Sudoku nach einer passenden leerstelle gesucht wird.
* @param index ist der Index der zusuchenden Leerstellen einer Box.
* @return 1, wenn die Zahl "anfang" in eine Leerstelle passt, ansonsten - 1.
*/


int Xbox(int fobject[],  int index1, int anfang)
{
	int i, j, j1, feldNum = 0, temp = 0, an, end, *x, *y, X1 = 0, Y1 = 0, f1, f3, index = 0;
	int in = anfang;  //  in ist die Zahl, die in Sudokoeingefuegt werden muss.
	x = &X1;
	y = &Y1;
	an = BoxWerte(index1, x, y);
	end = an + 20;
	for (i = X1; i <= X1 + 2; i++)
	{
		for (j1 = Y1; j1 <= Y1 + 2; j1++)
		{
			index = i * 9 + j1;
			if (fobject[index] + 0 == anfang) //wenn j(1 bis 9) in der Zeile gefunden wird, dann temp=-1
			{
				return -1;
			}
		}
	}
	return 1;
}

