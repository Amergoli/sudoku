#include <Windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include "header.h"

/**
* Gibt das Menue aus.
* Anhand der Elemente des Menues gibt diese Funktion das Menue aus.
* hier wird auch durch die Elemente des Menues navigiert.
*
* @param x ist X-Wert der Koordinaten.
* @param y ist Y-Wert der Koordinaten.
* @menu enthaelt die Elemente des Menues.
* @laenge enthaelt die Anzahl der Elemente des Menues.
* @return eine Zahl entsprechend der Auswahl des Menues.
*/

int Menu(int x, int y, struct Menu hauptmenu[],int laenge)
{
	int charakter = 80, i,j,z,menuNum=-1;


	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	    GoToXY(x-1,0);
		putc(201, stdout);//╔
		for (j = 0; j < 19; j++)
	    putc(205, stdout);//═
		GoToXY(x+19, 0);
		putc(187, stdout);
		

	for (z = 1; z <= laenge*2; z=z+2)
	{
		GoToXY(x-1, z);
		putc(199, stdout);//╟
		GoToXY(x-1, z+1);
		putc(186, stdout);//║
		GoToXY(x, z);
		for (j = 0; j < 19; j++)
			putc(196, stdout);// ─
		putc(182, stdout);// ╢
		GoToXY(x+19, z + 1);
		putc(186, stdout);//║


	}
	GoToXY(x-1, z);
	putc(200, stdout);
	for (j = 0; j < 19; j++)
		putc(205, stdout);//═
	GoToXY(x+19, z);
	putc(188, stdout);
	GoToXY(x + 8, 1);
	printf("MENU");

	
		while (charakter != 27)
		{
			if (charakter == 13)
			{
					for(i=0;i<laenge;i++)
					{
						if (i == menuNum)
						{
							return i;
						}
					}
			}
			else if (charakter == 80 || charakter == 72)
			{
				if(charakter == 80)
				   menuNum++;
				if (charakter == 72)
					menuNum--;
				if (menuNum == laenge)
					menuNum = 0;
				if (menuNum == -1)
					menuNum = laenge-1;
				for (i = 0; i < laenge; i++)
				{
					if (i == menuNum)
					{
						SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN);
						GoToXY(x, i*2+y);
						printf("%s", hauptmenu[i].name);
						SetConsoleTextAttribute(hConsole, saved_attributes);
					}
					else {
						SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
						GoToXY(x, i*2+y);
						printf("%s", hauptmenu[i].name);
						SetConsoleTextAttribute(hConsole, saved_attributes);
					}
				}
			}
			charakter = getch();
		}
		
	SetConsoleTextAttribute(hConsole, saved_attributes);
	return -1;
}
