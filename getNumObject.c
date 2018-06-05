

#include<stdlib.h>
#include<stdio.h>
#include "header.h"

/**
* Mit dieser Funktion wird ermittelt, ob eine Zahl in eine bestimmte Box des Sudokus reinpasst unter Einhaltung der Sudoku Regeln.
* Die Funktion gibt entweder die passende Zahl oder - 1 heraus.
*
* @param fobject[] ist das Sudoku.
* @param index ist der Index der Stelle im Sudoku, die ermittelt werden soll.
* @param anfang ist die Zahl, wonach ermittelt werden soll.
* @return die passende Zahl, Sonst -1.
*/

int getNumObject(int fobject[],int index,int anfang)
 {
	int i, j,j1, feldNum = 0, temp = 0,an,end,*x,*y,X1=0,Y1=0;
    int in = anfang;  //    in ist die Zahl, die in Sudokoeingefuegt werden muss.
	x = &X1;
	y = &Y1;
	an = BoxWerte(index,x,y);
	end = an + 20;
	for (j = in; j <= 9; j++)
	{	
		for (i = X1; i <= X1 + 2; i++)
		{
			for (j1 = Y1; j1 <= Y1 + 2; j1++)
			{
				index = i * 9 + j1;
				if (fobject[index] == j) //wenn j(1 bis 9) in der Zeile gefunden wird, dann temp=-1
				{
					temp = -1;
					//i = max;
					i = X1 + 2;
					break;
				}
				else
				{
					temp = 1;
					in = j;
				}
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


