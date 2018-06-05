#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Header.h"

int main()
{ 
	int feld[81],//"feld" enthaelt das Sudoku.
		oben = -1, feed = 0;
		
	//int *up;// "UP" enthaelt einen Zeiger auf das oberste Element des Stapels. Wenn Stapel keine Elemente hat, inhalt von UP ist -1.
	up = &oben;
	anleitung(9, 13);
	while (feed!=-1)
	{	
		oben = -1;
		feed=getcharakter(feld,  up);
	}
}
