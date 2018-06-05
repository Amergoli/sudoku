
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <time.h>
#include "Header.h"

/**
* Die Funktion bestimmt den Schwierigkeitsgrad des einzulesenden Sudokus entsprechend der uebergegebenen Argumenten.
* Die Funktion waehlt zufaehlig eine Textdatei aus. hier wird auch die Gueltigkeitfunktion des Sudokus aufgerufen.
*
* @param menuFeed ist der Wert eines Elements des Menues.
* @param feld[] enthaelt das Sudoku.
* @param speicherStand[] enthaelt das Sudoku.
* @param loesung[] enthaelt das Sudoku.
* @return wenn Sudoku nicht gueltig ist return 10, bei Auswahl menufeed "schliessen" return -1. 
*/



int SchwierigkeitsGrad(int menuFeed, int loesung[], int speicherStand[], int feld[])
{
	struct Menu schwiergkeit[] = { "     Schwierig     "
							      ,"      Mittel       "
	                              ,"     Einfach       "
		                          ,"    schliessen     " };

	char  name[20];
	int random, vollPos[81], Gueltigkeit;
	srand(time(NULL));
	//untermenue
	menuFeed = Menu(81, 2, schwiergkeit, sizeof(schwiergkeit) / sizeof(struct Menu));
	if (menuFeed == 0)//Schwierig
	{   //Ein Sudoku wird zufaelig ausgewaelt.
		random = rand() % 7 + 1;
		snprintf(name, 15, "schwierig%d.txt", random);
		read(feld, name, loesung, speicherStand);
		showEntryList(feld, 0);

		Gueltigkeit = funktionvollPos(feld, vollPos);
		if (Gueltigkeit == -1)
		{
			system("cls");
			massage("Das Sudoku ist nicht Gueltig (Regelverletzung)!", 8, 10);
			anleitung(9, 13);
			return 10;
		}
	}
	if (menuFeed == 1)//mittel
	{//Ein Sudoku wird zufaelig ausgewaelt.
		random = rand() % 5 + 1;
		snprintf(name, 15, "mittel%d.txt", random);
		read(feld, name, loesung, speicherStand);
		
		Gueltigkeit = funktionvollPos(feld, vollPos);

		if (Gueltigkeit == -1)
		{
			system("cls");
			massage("Das Sudoku ist nicht Gueltig (Regelverletzung)!", 8, 10);
			anleitung(9, 13);
			return 10;

		}
		menuFeed = 0;

	}
	if (menuFeed == 2)//einfach
	{//Ein Sudoku wird zufaelig ausgewaelt.
		random = rand() % 5 + 1;
		snprintf(name, 15, "einfach%d.txt", random);
		read(feld, name, loesung, speicherStand);
		Gueltigkeit = funktionvollPos(feld, vollPos);
		if (Gueltigkeit == -1)
		{
			system("cls");
			massage("Das Sudoku ist nicht Gueltig (Regelverletzung)!", 8, 10);
			anleitung(9, 13);
			return 10;
		}

		menuFeed = 0;

	}
	if (menuFeed == 3 || menuFeed == -1)
	{
		return -1;
	}
	return menuFeed;
}