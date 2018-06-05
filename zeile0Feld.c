

#include<stdlib.h>
#include<stdio.h>
#include "header.h"

/**
* Diese Funktion nutzt „Xbox“, „Xspalte“ und „Xzeile“
* um Zeile für Zeile durch das Sudoku zu gehen und
* die einzelnen Felder zu prüfen. Für jedes freie Feld
* wird festgestellt, ob es nur einen Wert gibt, der
* eingetragen werden kann. Wenn ja, dann wird er in das
* sudokuFeld[] an dieser Position eingetragen.
*
* @param fobject[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @return -1, wenn keine Zahl in die Zeile passt.
*/



int zeile0Feld(int fobject[],int Anzahl0)
{
	int i, j=0, j1, topfeld[81], *x, *y, X1 = 0, Y1 = 0, index, w, f1 = 0, f2 = 0, f3 = 0, temp, tempidx = 0, sudo = 0, fortX = 0, fortY = 0, fortAnzahl = 0, topIdx = 0;
	x = &X1;
	y = &Y1;

	for (sudo = 1; sudo < 10; sudo++)//vergleicht alle leere Zellen mit 1 bis 9
	{
				temp = 0;
				BoxWerte(j, x, y);
				for (i = 0; i <= 8; i++)
				{
					for (j1 = Y1; j1 <= Y1 + 8; j1++)
					{
						index = i * 9 + j1;
						if (fobject[index] == 0)
						{
							f1 = Xspalte(fobject, index, sudo);
							f3 = Xzeile(fobject,  index, sudo);
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
							if (temp > 1)
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


