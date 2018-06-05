#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include "Header.h"

/**
* Die Funktion gibt dem Spieler ein Tipp.
*
* @param i ist Index der Leerestelle, ander der Spieler einen Tipp fordert.
* @param leerPos[] enthaelt Indizes der Leerstellen.
* @param loesung[] enhaelt die Loesung des Sudokus.
* @param tippZaehler ist der Wert, wieviele Tipps der Spieler zur Verfügung hat
* @return neuer Wert des tippZaehler's.
*/

int Tipp(int i, int leerPos[],  int loesung[], int tippZaehler)
{
	if (tippZaehler > 0)
	{
		printf("%d", loesung[leerPos[i]]);
		GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);
		tippZaehler--;
	}
	GoToXY(16, 22);
	printf("%d ", tippZaehler);
	GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);
	return tippZaehler;
}