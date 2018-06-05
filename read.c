
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include"Header.h"

/**
* Die Funktion liest die Textdatei „fileName“ ein.
* Des Weiteren belegt die Funktion read das Feld „sudokuFeld“
* mit dem ersten Teil der Textdatei. Der erste Teil der Textdatei
* ist entweder mit dem noch nicht gelösten oder dem gelösten 
* Sudoku belegt (Speicherstand). Der zweite Teil enthält immer das ursprüngliche
* Sudoku. Die Felder „loesung“ und „orginalSudoku“ werden mit dem 
* zweiten Teil der Textdatei belegt.
*
* @param feld[] wird den ersten Teil der Textdatei beinhalten.
* @param fileName[] ist der Name der Textdatei.
* @param loesung[] wird den zweiten Teil der Textdatei beinhalten.
* @param speicherStand[] wird den zweiten Teil der Textdatei beinhalten.
*/


void read(int feld[], char fileName[], int loesung[],int speicherStand[])
{
	int c, i, j = 0, element;
	FILE *file;
	file = fopen(fileName, "r");
	if (file) {
		for (i = 0; i < 162; i++)
		{

			if ((c = getc(file)) != EOF)
			{
				if (i < 81)
				{
					element = c;
					if (element == 46)
					{
						feld[i] = 0;
					}
					else	if (element >= 48 && element <= 57)
					{
						feld[i] = element - 48;
					}
				}

				else
				{
					element = c;
					if (element == 46)
					{
						loesung[i - 81] = 0;
						speicherStand[i - 81] = 0;
					}
					else	if (element >= 48 && element <= 57)
					{
						loesung[i - 81] = element - 48;
						speicherStand[i - 81] = element - 48;
					}

				}
			}
			else if (i < 100)
			{
				loesung = feld;
				speicherStand = feld;
			}

		}

		fclose(file);
	}

}