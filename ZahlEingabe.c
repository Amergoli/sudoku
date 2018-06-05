#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include "Header.h"

/**
* Eingabe der Zahlen im Sudoku.
*
* @param i ist Index einer Leerestelle, wo eine Zahl eingegeben wird.
* @param feld[] enthaelt das Sudoku.
* @param leerPos[] enthaelt Indizes der Leerstellen.
* @param Anzahl0Element ist die Anzahl der Leerstellen.
* @param Letzt0Element ist der Index der letzten Leerstelle.
* @charakter ist die Eingegebene Zahl.
* @return Index der naechsten Leerstelle.
*/

int Zahleingabe(int i, int leerPos[], int Anzahl0Element, int Letzt0Element, int charakter, int feld[])
{
	int temp;
	if (leerPos[i] <= Letzt0Element && leerPos[i] >= 0)
	{
		temp = charakter - 48;//z. B. ascii code von 1 = 49, dann 49-48=1!
		init(feld, leerPos[i], temp);
		if (i<Anzahl0Element - 1)
			showEntryList(feld, leerPos[++i]);
		else
		{
			i = 0;
			showEntryList(feld, leerPos[i]);
			return i;
		}
		GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);
		return i;
	}
	return i;
}