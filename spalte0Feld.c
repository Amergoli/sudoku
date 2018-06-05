#include<stdlib.h>
#include<stdio.h>
#include "header.h"


/**
* Diese Funktion nutzt „Xbox“, „Xspalte“ und „Xzeile“ 
* um Spalte für Spalte durch das Sudoku zu gehen und 
* die einzelnen Felder zu prüfen. Für jedes freie Feld 
* wird festgestellt, ob es nur einen Wert gibt, der 
* eingetragen werden kann.Wenn ja, dann wird er in das 
* sudokuFeld[] an dieser Position eingetragen.
*
* @param fobject[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @return -1, wenn keine Zahl in die Spalte passt.
*/
int spalte0Feld(int  fobject[], int Anzahl0)
{
	int i,  j1,  /* *x, *y, j = 0,*/ X1 = 0, Y1 = 0, index, f1 = 0, f2 = 0, f3 = 0, temp, tempidx = 0, sudo = 0;
	//x = &X1;
	//y = &Y1;

	for (sudo = 1; sudo < 10; sudo++)//vergleicht alle leere Zellen mit 1 bis 9
	{
		//printf("%d\n", sudo);
		temp = 0;
		//BoxWerte(j, x, y);// 
		for (j1 = Y1; j1 <= 8; j1++)
		{
			for (i = 0; i <= 8; i++)
			{
				index = i * 9 + j1;
				if (fobject[index] == 0)
				{
					f1 = Xspalte(fobject, index, sudo);
					f3 = Xzeile(fobject, index, sudo);
					f2 = Xbox(fobject, index, sudo);
					if (f2 == -1 || f1 == -1 || f3 == -1)
					{
						f2 = -1;
					}
					if (f2 == 1)
					{
						temp++;
						tempidx = index;
					}
					if (temp > 1)// passt die Zahl mehr als ein Mal in die Spalte, so ist die Suche beendet und wird -1 ausgegeben. 
					{
						break;
					}
				}
			}
			if (temp == 1 && j1 == 9)
			{
				init(fobject, tempidx, sudo);
			}
		}
	}
	return -1;
}


