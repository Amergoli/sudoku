

#include<stdlib.h>
#include<stdio.h>
#include "header.h"
/**
* Mit dieser Funktion wird ermittelt, ob eine Zahl in eine bestimmte Zeile des Sudokus reinpasst unter Einhaltung der Sudoku Regeln
* Die Funktion gibt entweder die passende Zahl oder - 1 heraus.
*
* @param fobject[] ist das Sudoku.
* @param index ist der Index der Stelle im Sudoku, die ermittelt werden soll.
* @param anfang ist die Zahl, wonach ermittelt werden soll.
* @return die passende Zahl, Sonst -1.
*/


int getNumObjectzeile(int fobject[], int index, int anfang)
{
	int i, j, temp = 0,itemp,max=0;
	int in = anfang;  // in ist die Zahl, die in Sudokoeingefuegt werden muss.
		itemp = index -(index % 9);
		max = itemp + 8;
		for (j = in; j <= 9; j++)
		{
			for (i=itemp ; i <= max; i++)
			{
						if (fobject[i] == j) 
						{
							temp = -1;
							i = max;
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


