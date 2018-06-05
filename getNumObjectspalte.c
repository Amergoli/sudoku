

#include<stdlib.h>
#include<stdio.h>
#include "header.h"
/**
* Mit dieser Funktion wird ermittelt, ob eine Zahl in eine bestimmte Spalte des Sudokus reinpasst unter Einhaltung der Sudoku Regeln.
* Die Funktion gibt entweder die passende Zahl oder - 1 heraus.
*
* @param fobject[] ist das Sudoku.
* @param index ist der Index der Stelle im Sudoku, die ermittelt werden soll.
* @param anfang ist die Zahl, wonach ermittelt werden soll.
* @return die passende Zahl, Sonst -1.
*/
int getNumObjectspalte(int fobject[], int index, int anfang)
{
	int i, j, feldNum = 0, temp = 0,itemp;
	int in = anfang;  //   "in" ist die Zahl, die in Sudokoeingefuegt werden soll.
		//itemp = fobject[index].yVal-1;// sorg dafür, dass in dem richtigen Spalte durchgesucht wird.
		itemp = index % 9;
		for (j = in; j <= 9; j++)
		{
			for (i=itemp ; i <= 81 - (9 - itemp); i=i+9)
			{
						if (fobject[i]== j) //wenn j(1 bis 9) in der Zeile gefunden wird, dann temp=-1
						{
							temp = -1;
							i = 81;
						}
						else
						{
							temp = 1;
							in = j;
						}
			}
			if (temp != -1)
			{
				j = 9;
			}
		}
		if (temp != -1)
		{
			return in;
		}
		else
		{
			return -1;
		}
}


