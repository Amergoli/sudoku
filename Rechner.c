#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Header.h"

/**
* „rechner“ ist der Kern des Backtracking - Algorithmuses.
* Hier wird die Funktion „zsuche()“organisiert.
*
* @param ob[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @param Letzt0Element ist die letzte Leerstelle.
* @param up ist das oberste Element des Stacks.
* @return 0, wenn nicht loesbar ist, sonst 1.
*/


int rechner(int ob[], int Letzt0Element,char *up,int leanth)
{
	struct stack stack_1[81];
	struct fieldObject *temp = ob;
	int indexpointer[81], zahl = 0, objectnum=81, index = 0, xzahl = 0,first0;
	int j = 0;
	first0 = findDataSud(ob);
	while (index != Letzt0Element)//Letzt0Element ist die letzte Nullstelle.
	{   
		index = findDataSud(ob);//die erste Nullstelle wird gefunden.
		push(stack_1, 0, 0, 0, up, index);
		zahl = zsuche(ob, index, xzahl);
		pop(stack_1, up);

		while (zahl == -1)
		{					
			if(zahl == -1 && ob[first0] == 0 && index == first0)
			{
			  return 0;
			}
			else {
				init(ob, stack_1[*up].index, 0);
				xzahl = stack_1[*up].num;
				index = findDataSud(ob);				
				pop(stack_1, up);
				push(stack_1, 0, 0, 0, up, index);
				zahl = zsuche(ob, index, xzahl);
				pop(stack_1, up);
				j++;
				
			}
		}
		xzahl = 0;
		init(ob, index, zahl);
		push(stack_1, zahl, 0, 0, up, index);
		j++;
		
	}
	
	return 1;
}