#include "Header.h"
/**
* Diese Funktion fuegt ein Element zum Stapel hinzu.
*
* @param stack_1 ist der Stapel.
* @param up ist das oberste Element des Stapels.
* @num ist eine im Sudoku existierende Zahl.
* @x ist der X-Wert der Koordinaten einer Stelle des Sudokus.
* @y ist der Y-Wert der Koordinaten einer Stelle des Sudokus.
* @param index ist der Index einer Stelle des Sudokus.
*/


void  push(struct stack *stack_1, int num,int x,int y, char* up,int index)
{
    int oben;
	oben= *up;
	oben++;
	*up = oben;
	stack_1[*up].num =  num;
	//stack_1[*up].xVal = x;
	//stack_1[*up].yVal = y;
	//stack_1[*up].index = index;
}
