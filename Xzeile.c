

#include<stdlib.h>
#include<stdio.h>
#include "header.h"

/**
* Eine Zeile wird geprüft, ob die Zahl „anfang“ überhaupt in die freien Zellen der Zeile passt.
* wenn die Zahl Passt, so wird 1 ausgegeben, ansonsten - 1.
*
* @param fobject[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @param anfang ist die Zahl, fuer sie im Sudoku nach einer passenden leerstelle gesucht wird.
* @param index ist der Index der zusuchenden Leerstellen einer Zeile.
* @return 1, wenn die Zahl "anfang" in eine Leerstelle passt, ansonsten - 1.
*/


int Xzeile(int fobject[],  int index, int anfang)
{
	int i, j, feldNum = 0, temp = 0, itemp;
	int in = anfang;  
	int objectnum, *num;
	num = &objectnum;
	itemp = index - (index % 9);
	//max = itemp + 8;
	for (i = itemp; i <= itemp + 8; i++)
	{
		if (fobject[i] + 0 == anfang)
		{
			return -1;
		}
	}
		return 1;
}


