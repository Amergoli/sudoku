#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Header.h"

/**
* bringt den Corsor an die geforderte Position.
*
* @param column ist x-Wert von Koordinaten.
* @param line ist y-Wert von Koordinaten.
*/
void GoToXY(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	if (!SetConsoleCursorPosition(hConsole, coord))
	{
		printf("!Error (Corsor)!");
	}
}