

#include<stdlib.h>
#include<stdio.h>
#include "header.h"
/**
* Diese Funktion nutzt „Xbox“, „Xspalte“ und „Xzeile“
* um Box für Box durch das Sudoku zu gehen und
* die einzelnen Felder zu prüfen. Für jedes freie Feld
* wird festgestellt, ob es nur einen Wert gibt, der
* eingetragen werden kann. Wenn ja, dann wird er in das
* sudokuFeld[] an dieser Position eingetragen.
*
* @param fobject[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @return -1, wenn keine Zahl in die Box passt.
*/


int box0Feld(int fobject[],int Anzahl0)
{
	int i, j, j1, *x, *y, X1 = 0, Y1 = 0, index, w, f1 = 0, f2 = 0,f3=0,temp,tempidx=0, sudo=0;
	x = &X1;
	y = &Y1;

	for (sudo = 1; sudo < 10; sudo++)//vergleicht alle leere Zellen mit 1 bis 9
	{
	for (w = 0; w <= 80; w = w + 27)
	{
		for (j = w; j < w+6; j = j + 3)//sorgt dafur, dass die Zellen Boxweise durchgesucht werden
		{
			temp = 0;
			BoxWerte(j, x, y);
				for (i = X1; i <= X1 + 2; i++)
				{
					for (j1 = Y1; j1 <= Y1 + 2; j1++)
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
							if (temp > 1)
							{
								i = X1 + 3;
								break;
							}
						}
					}
					if (temp == 1 && i == X1 + 2)
					{	
						init(fobject, tempidx, sudo);
						sudo=-1;
					}
				}
			}
		}
	}
		return -1;
}


