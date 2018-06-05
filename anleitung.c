#include <Windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include "header.h"

/**
* Anleitung wird ausgegeben.
* Fuer die Anleitung haben wir eine Box mit Hilfe der 
* eingegangenen Parametern x und y positioniert und in ihr die Anleitung geschrieben.
*
* @param x ist die x Koordinate
* @param y ist die y Koordinate
*/

void anleitung(int x, int y)
{

	

	int i, j, z = 0, index;
	

	//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░                                                                     ░
	//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

	//Positionuerung des gruenen Feldes

	for (i = y; i < y + 15; i++)
	{
		GoToXY(x, i);
		putc(176, stdout);
	}

	for (i = x; i < x + 70; i++)
	{
		GoToXY(i, y);
		putc(176, stdout);
	}
	for (i = y; i < y + 15; i++)
	{
		GoToXY(x+70, i);
		putc(176, stdout);
	}
	for (i = x; i < x + 70; i++)
	{
		GoToXY(i, y+14);
		putc(176, stdout);
	}
	GoToXY(x+30, y);
	printf("ANTEILUNG");
	GoToXY(x+2 , y+2);
	printf("Das Sudoku hat die Groesse von 9x9 Feldern. Die daraus  ");
	GoToXY(x + 2, y + 3);
	printf("resultierenden 81 Felder sind in je neun Zeilen, Spalten und ");
	GoToXY(x + 2, y + 4);
	printf("Bloecke unterteilt. Ziel eines Sudoku Raetsels ist es alle 81");
	GoToXY(x + 2, y + 5);
	printf("Felder so zu fuellen, dass  in jedem Block, in jeder Spalte  ");
	GoToXY(x + 2, y + 6);
	printf("und in jeder Zeile die Ziffern von 1 bis 9 nur einmal vorkommen.  ");

	//for (int c = 170; c <= 220; c++)
	//{
	//	printf("  ");
	//	putc(c, stdout);
	//}

}
