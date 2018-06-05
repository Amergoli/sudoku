#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <time.h>
#include "Header.h"

/**
* die Eingaben des Spielers wird auf Richtigkeit geprueft.
* 
* @param feld[] enthaelt das Sudoku.
* @param loesung[] enthaelt die Loesung des Sudokus.

*/

void pruefen(int feld[], int loesung[])
{
	int PrAnzahl0Element = 0, ip, flag=0;
	char text;
	for (ip = 0; ip <= 80; ip++)
	{
		if (feld[ip] == 0)
		{
			PrAnzahl0Element++;
		}
	}
	if (PrAnzahl0Element > 0)
	{

		GoToXY(8, 23);
		printf("ES gibt immer noch %d leere Stellen! Druecke rechte oder linke Pfeiltaste, um weiter zuspielen.", PrAnzahl0Element);
	}
	else {
		for (ip = 0; ip <= 80; ip++)
		{
			if (feld[ip] != loesung[ip])
			{
				flag = 1;
				init(feld, ip, 0);
			}
		}
		if (flag == 1)
		{
			
			massage("Falsche Loesung. Falsche Stellen werden zurueckgesetzt. Druecke rechte oder linke Pfeiltaste, um weiter zuspielen.", 8, 23);
		}
		else
		{
			massage("Glueckwunsch. Richtig geloest!", 8, 23);
		}
		flag = 0;
	}

}