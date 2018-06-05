#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <time.h>
#include "Header.h"
/**
* gibt die Anweisungen in der Console, an der Stelle x und y aus.
*
* @param text ist der auszugebende Text.
* @param x ist X-Wert der Koordinaten.
* @param y ist y-Wert der Koordinaten.
*/

void massage(char text[],int x, int y)
{
	GoToXY(x, y);
	printf("%s",text);
}