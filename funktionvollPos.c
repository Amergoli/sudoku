
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include"Header.h"

/**
* Diese Funktion ermittelt die allgemeine Gueltigkeit des Sudokus.
*
* @param feld[] enthaelt das Sudoku.
* @param vollPos[] enthaelt Indices der Vorgaben im Sudoku.
* @return -1, wenn Vorgaben der Box die Regelen verletzen, sonst 1.
*/



int funktionvollPos(int feld[], int vollPos[])
{
	int c, i, j = 0, element, AnzahldervollenStellen = 0, error=0;
	for (i = 0; i <= 80; i++)
	{
		if (feld[i] != 0)
		{
			vollPos[AnzahldervollenStellen] = i;
			AnzahldervollenStellen++;
		}
	}

	for (i = 0; i < AnzahldervollenStellen; i++)
	{
		if (error < 2)
		{
			error = BoxGultigkeit(feld, vollPos[i], feld[vollPos[i]]);
			error = ZeileGultigkeit(feld, vollPos[i], feld[vollPos[i]]);
			error = SpalteGultigkeit(feld, vollPos[i], feld[vollPos[i]]);

		}
		else
			return -1;			

	}
	return error;

}