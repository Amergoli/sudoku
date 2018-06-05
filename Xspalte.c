

#include<stdlib.h>
#include<stdio.h>
#include "header.h"

/**
* Eine Spalte wird geprüft, ob die Zahl „anfang“ überhaupt in die freien Zellen der Box passt.
* wenn die Zahl Passt, so wird 1 ausgegeben, ansonsten - 1.
*
* @param fobject[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @param anfang ist die Zahl, fuer sie im Sudoku nach einer passenden leerstelle gesucht wird.
* @param index ist der Index der zusuchenden Leerstellen einer Spalte.
* @return 1, wenn die Zahl "anfang" in eine Leerstelle passt, ansonsten - 1.
*/


int Xspalte(int fobject[], int index, int anfang)
{
	int i, j, feldNum = 0, temp = 0, itemp;
	int in = anfang;  //    in ist die Zahl, die in Sudokoeingefuegt werden muss.
	int objectnum, *num;
	num = &objectnum;
	itemp = index % 9;
	for (i = itemp; i <= 81 - (9 - itemp); i = i + 9)
	{
		if (fobject[i] + 0 == anfang) 
		{
			return -1;
		}
	}
	return 1;
}


