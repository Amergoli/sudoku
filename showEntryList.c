



#include <Windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include "header.h"

/**
* Gibt ganz allgemein das Sudoku in der Konsole aus und beachtet dabei die Position des Cursors des Sudokus für die Steuerung im Sudoku. 
* „Indexpointer“ ist der Index der Stelle im Feld 
* an der sich der Cursor des Sudokus befindet. Durch die rechte 
* und linke Pfeiltaste kann man den Cursor des Sudokus durch das 
* Sudokufeld bewegen. Dabei springt der Cursor des Sudokus nur auf 
* die veränderbaren Elemente.
*
* @param fobject ist das Sudoku.
* @param indexpointer  ist der Index der Stelle im Feld, an der sich der Cursor des Sudokus befindet.
*/


void showEntryList(int fobject[], int indexpointer)
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	
	int i, j, z = 0,index;
	SetConsoleTextAttribute(hConsole, saved_attributes);
	GoToXY(0, 0);
	for (i = 0; i<9; i++)
	{
		printf("\n\n\t");
		for (j = 0; j<9; j++)
		{
			if (z == indexpointer)
			{				
				SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
				if (fobject[z] == 0)
				{
					printf("     ");
				}
				else {
					SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN);
					printf("  %d  ", fobject[z]);
				}
			}
			else
			{
				SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN);
				if (fobject[z] == 0)
				{
					printf("     ");
				}
				else {
					SetConsoleTextAttribute(hConsole, saved_attributes);
					printf("  %d  ", fobject[z]);
				}
			}
			z++;
		}
	}



	SetConsoleTextAttribute(hConsole, saved_attributes);
	//SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
	//        ╔════╤════╤════╦════╤════╤════╦════╤════╤════╗
	//        ║ 9  │ 0  │ 0  ║ 6  │ 0  │ 8  ║ 0  │ 0  │ 0  ║
	GoToXY(8, 1);
	putc(201, stdout);//╔
	GoToXY(8, 2);
	putc(186, stdout);//║   
	GoToXY(9, 1);
	for (int c = 0; c <= 44; c++)
	{
		putc(205, stdout);//═
	}
	GoToXY(13, 1);
	putc(209, stdout);// ╤
	GoToXY(13, 2);
	putc(179, stdout);// │
	GoToXY(18, 1);
	putc(209, stdout);
	GoToXY(18, 2);
	putc(179, stdout);
	GoToXY(23, 1);
	putc(203, stdout);//╦
	GoToXY(23, 2);
	putc(186, stdout);//║
	GoToXY(28, 1);
	putc(209, stdout);// ╤
	GoToXY(28, 2);
	putc(179, stdout);// │
	GoToXY(33, 1);
	putc(209, stdout);// ╤
	GoToXY(33, 2);
	putc(179, stdout);// │
	GoToXY(38, 1);
	putc(203, stdout);//╦
	GoToXY(38, 2);
	putc(186, stdout);//║
	GoToXY(43, 1);
	putc(209, stdout);// ╤
	GoToXY(43, 2);
	putc(179, stdout);// │
	GoToXY(48, 1);
	putc(209, stdout);// ╤
	GoToXY(48, 2);
	putc(179, stdout);// │
	GoToXY(53, 1);
	putc(187, stdout);
	GoToXY(53, 2);
	putc(186, stdout);//║ 


	//  ╟────┼────┼────╫────┼────┼────╫────┼────┼────╢
	//	║ 6  │ 4  │ 8  ║ 0  │ 1  │ 0  ║ 5  │ 2  │ 9  ║

	GoToXY(8, 3);
	putc(199, stdout);//╟
	GoToXY(8, 4);
	putc(186, stdout);//║   
	GoToXY(9, 3);
	for (int c = 0; c <= 44; c++)
	{
		putc(196, stdout);// ─
	}
	GoToXY(13, 3);
	putc(197, stdout);// ┼
	GoToXY(13, 4);
	putc(179, stdout);// │
	GoToXY(18, 3);
	putc(197, stdout);// ┼
	GoToXY(18, 4);
	putc(179, stdout);// │
	GoToXY(23, 3);
	putc(215, stdout);// ╫
	GoToXY(23, 4);
	putc(186, stdout);//║
	GoToXY(28, 3);
	putc(197, stdout);// ┼
	GoToXY(28, 4);
	putc(179, stdout);// │
	GoToXY(33, 3);
	putc(197, stdout);// ┼
	GoToXY(33, 4);
	putc(179, stdout);// │
	GoToXY(38, 3);
	putc(215, stdout);// ╫
	GoToXY(38, 4);
	putc(186, stdout);//║
	GoToXY(43, 3);
	putc(197, stdout);// ┼
	GoToXY(43, 4);
	putc(179, stdout);// │
	GoToXY(48, 3);
	putc(197, stdout);// ┼
	GoToXY(48, 4);
	putc(179, stdout);// │
	GoToXY(53, 3);
	putc(182, stdout);// ╢
	GoToXY(53, 4);
	putc(186, stdout);//║ 


	//  ╟────┼────┼────╫────┼────┼────╫────┼────┼────╢
	//	║ 0  │ 0  │ 0  ║ 0  │ 9  │ 0  ║ 6  │ 0  │ 0  ║

	GoToXY(8, 5);
	putc(199, stdout);//╟
	GoToXY(8, 6);
	putc(186, stdout);//║   
	GoToXY(9, 5);
	for (int c = 0; c <= 44; c++)
	{
		putc(196, stdout);// ─
	}
	GoToXY(13, 5);
	putc(197, stdout);// ┼
	GoToXY(13, 6);
	putc(179, stdout);// │
	GoToXY(18, 5);
	putc(197, stdout);// ┼
	GoToXY(18, 6);
	putc(179, stdout);// │
	GoToXY(23, 5);
	putc(215, stdout);// ╫
	GoToXY(23, 6);
	putc(186, stdout);//║
	GoToXY(28, 5);
	putc(197, stdout);// ┼
	GoToXY(28, 6);
	putc(179, stdout);// │
	GoToXY(33, 5);
	putc(197, stdout);// ┼
	GoToXY(33, 6);
	putc(179, stdout);// │
	GoToXY(38, 5);
	putc(215, stdout);// ╫
	GoToXY(38, 6);
	putc(186, stdout);//║
	GoToXY(43, 5);
	putc(197, stdout);// ┼
	GoToXY(43, 6);
	putc(179, stdout);// │
	GoToXY(48, 5);
	putc(197, stdout);// ┼
	GoToXY(48, 6);
	putc(179, stdout);// │
	GoToXY(53, 5);
	putc(182, stdout);// ╢
	GoToXY(53, 6);
	putc(186, stdout);//║ 



	//  ╠════╪════╪════╬════╪════╪════╬════╪════╪════╣
	//  ║ 0  │ 9  │ 6  ║ 0  │ 0  │ 1  ║ 0  │ 0  │ 0  ║

	GoToXY(8, 7);
	putc(204, stdout);//╟
	GoToXY(8, 8);
	putc(186, stdout);//║   
	GoToXY(9, 7);
	for (int c = 0; c <= 44; c++)
	{
		putc(205, stdout);// ─
	}
	GoToXY(13, 7);
	putc(216, stdout);// ┼
	GoToXY(13, 8);
	putc(179, stdout);// │
	GoToXY(18, 7);
	putc(216, stdout);// ┼
	GoToXY(18, 8);
	putc(179, stdout);// │
	GoToXY(23, 7);
	putc(206, stdout);// ╫
	GoToXY(23, 8);
	putc(186, stdout);//║
	GoToXY(28, 7);
	putc(216, stdout);// ┼
	GoToXY(28, 8);
	putc(179, stdout);// │
	GoToXY(33, 7);
	putc(216, stdout);// ┼
	GoToXY(33, 8);
	putc(179, stdout);// │
	GoToXY(38, 7);
	putc(206, stdout);// ╫
	GoToXY(38, 8);
	putc(186, stdout);//║
	GoToXY(43, 7);
	putc(216, stdout);// ┼
	GoToXY(43, 8);
	putc(179, stdout);// │
	GoToXY(48, 7);
	putc(216, stdout);// ┼
	GoToXY(48, 8);
	putc(179, stdout);// │
	GoToXY(53, 7);
	putc(185, stdout);// ╢
	GoToXY(53, 8);
	putc(186, stdout);//║ 




					  //  ╟────┼────┼────╫────┼────┼────╫────┼────┼────╢
					  //	║ 6  │ 4  │ 8  ║ 0  │ 1  │ 0  ║ 5  │ 2  │ 9  ║

	GoToXY(8, 9);
	putc(199, stdout);//╟
	GoToXY(8, 10);
	putc(186, stdout);//║   
	GoToXY(9, 9);
	for (int c = 0; c <= 44; c++)
	{
		putc(196, stdout);// ─
	}
	GoToXY(13, 9);
	putc(197, stdout);// ┼
	GoToXY(13, 10);
	putc(179, stdout);// │
	GoToXY(18, 9);
	putc(197, stdout);// ┼
	GoToXY(18, 10);
	putc(179, stdout);// │
	GoToXY(23, 9);
	putc(215, stdout);// ╫
	GoToXY(23, 10);
	putc(186, stdout);//║
	GoToXY(28, 9);
	putc(197, stdout);// ┼
	GoToXY(28, 10);
	putc(179, stdout);// │
	GoToXY(33, 9);
	putc(197, stdout);// ┼
	GoToXY(33, 10);
	putc(179, stdout);// │
	GoToXY(38, 9);
	putc(215, stdout);// ╫
	GoToXY(38, 10);
	putc(186, stdout);//║
	GoToXY(43, 9);
	putc(197, stdout);// ┼
	GoToXY(43, 10);
	putc(179, stdout);// │
	GoToXY(48, 9);
	putc(197, stdout);// ┼
	GoToXY(48, 10);
	putc(179, stdout);// │
	GoToXY(53, 9);
	putc(182, stdout);// ╢
	GoToXY(53, 10);
	putc(186, stdout);//║ 


					  //  ╟────┼────┼────╫────┼────┼────╫────┼────┼────╢
					  //	║ 0  │ 0  │ 0  ║ 0  │ 9  │ 0  ║ 6  │ 0  │ 0  ║

	GoToXY(8, 11);
	putc(199, stdout);//╟
	GoToXY(8, 12);
	putc(186, stdout);//║   
	GoToXY(9, 11);
	for (int c = 0; c <= 44; c++)
	{
		putc(196, stdout);// ─
	}
	GoToXY(13, 11);
	putc(197, stdout);// ┼
	GoToXY(13, 12);
	putc(179, stdout);// │
	GoToXY(18, 11);
	putc(197, stdout);// ┼
	GoToXY(18, 12);
	putc(179, stdout);// │
	GoToXY(23, 11);
	putc(215, stdout);// ╫
	GoToXY(23, 12);
	putc(186, stdout);//║
	GoToXY(28, 11);
	putc(197, stdout);// ┼
	GoToXY(28, 12);
	putc(179, stdout);// │
	GoToXY(33, 11);
	putc(197, stdout);// ┼
	GoToXY(33, 12);
	putc(179, stdout);// │
	GoToXY(38, 11);
	putc(215, stdout);// ╫
	GoToXY(38, 12);
	putc(186, stdout);//║
	GoToXY(43, 11);
	putc(197, stdout);// ┼
	GoToXY(43, 12);
	putc(179, stdout);// │
	GoToXY(48, 11);
	putc(197, stdout);// ┼
	GoToXY(48, 12);
	putc(179, stdout);// │
	GoToXY(53, 11);
	putc(182, stdout);// ╢
	GoToXY(53, 12);
	putc(186, stdout);//║ 



					  //  ╠════╪════╪════╬════╪════╪════╬════╪════╪════╣
					  //  ║ 0  │ 9  │ 6  ║ 0  │ 0  │ 1  ║ 0  │ 0  │ 0  ║

	GoToXY(8, 13);
	putc(204, stdout);//╟
	GoToXY(8, 14);
	putc(186, stdout);//║   
	GoToXY(9, 13);
	for (int c = 0; c <= 44; c++)
	{
		putc(205, stdout);// ─
	}
	GoToXY(13, 13);
	putc(216, stdout);// ┼
	GoToXY(13, 14);
	putc(179, stdout);// │
	GoToXY(18, 13);
	putc(216, stdout);// ┼
	GoToXY(18, 14);
	putc(179, stdout);// │
	GoToXY(23, 13);
	putc(206, stdout);// ╫
	GoToXY(23, 14);
	putc(186, stdout);//║
	GoToXY(28, 13);
	putc(216, stdout);// ┼
	GoToXY(28, 14);
	putc(179, stdout);// │
	GoToXY(33, 13);
	putc(216, stdout);// ┼
	GoToXY(33, 14);
	putc(179, stdout);// │
	GoToXY(38, 13);
	putc(206, stdout);// ╫
	GoToXY(38, 14);
	putc(186, stdout);//║
	GoToXY(43, 13);
	putc(216, stdout);// ┼
	GoToXY(43, 14);
	putc(179, stdout);// │
	GoToXY(48, 13);
	putc(216, stdout);// ┼
	GoToXY(48, 14);
	putc(179, stdout);// │
	GoToXY(53, 13);
	putc(185, stdout);// ╢
	GoToXY(53, 14);
	putc(186, stdout);//║ 





					  //  ╟────┼────┼────╫────┼────┼────╫────┼────┼────╢
					  //	║ 6  │ 4  │ 8  ║ 0  │ 1  │ 0  ║ 5  │ 2  │ 9  ║

	GoToXY(8, 15);
	putc(199, stdout);//╟
	GoToXY(8, 16);
	putc(186, stdout);//║   
	GoToXY(9, 15);
	for (int c = 0; c <= 44; c++)
	{
		putc(196, stdout);// ─
	}
	GoToXY(13, 15);
	putc(197, stdout);// ┼
	GoToXY(13, 16);
	putc(179, stdout);// │
	GoToXY(18, 15);
	putc(197, stdout);// ┼
	GoToXY(18, 16);
	putc(179, stdout);// │
	GoToXY(23, 15);
	putc(215, stdout);// ╫
	GoToXY(23, 16);
	putc(186, stdout);//║
	GoToXY(28, 15);
	putc(197, stdout);// ┼
	GoToXY(28, 16);
	putc(179, stdout);// │
	GoToXY(33, 15);
	putc(197, stdout);// ┼
	GoToXY(33, 16);
	putc(179, stdout);// │
	GoToXY(38, 15);
	putc(215, stdout);// ╫
	GoToXY(38, 16);
	putc(186, stdout);//║
	GoToXY(43, 15);
	putc(197, stdout);// ┼
	GoToXY(43, 16);
	putc(179, stdout);// │
	GoToXY(48, 15);
	putc(197, stdout);// ┼
	GoToXY(48, 16);
	putc(179, stdout);// │
	GoToXY(53, 15);
	putc(182, stdout);// ╢
	GoToXY(53, 16);
	putc(186, stdout);//║ 


					  //  ╟────┼────┼────╫────┼────┼────╫────┼────┼────╢
					  //	║ 0  │ 0  │ 0  ║ 0  │ 9  │ 0  ║ 6  │ 0  │ 0  ║

	GoToXY(8, 17);
	putc(199, stdout);//╟
	GoToXY(8, 18);
	putc(186, stdout);//║   
	GoToXY(9, 17);
	for (int c = 0; c <= 44; c++)
	{
		putc(196, stdout);// ─
	}
	GoToXY(13, 17);
	putc(197, stdout);// ┼
	GoToXY(13, 18);
	putc(179, stdout);// │
	GoToXY(18, 17);
	putc(197, stdout);// ┼
	GoToXY(18, 18);
	putc(179, stdout);// │
	GoToXY(23, 17);
	putc(215, stdout);// ╫
	GoToXY(23, 18);
	putc(186, stdout);//║
	GoToXY(28, 17);
	putc(197, stdout);// ┼
	GoToXY(28, 18);
	putc(179, stdout);// │
	GoToXY(33, 17);
	putc(197, stdout);// ┼
	GoToXY(33, 18);
	putc(179, stdout);// │
	GoToXY(38, 17);
	putc(215, stdout);// ╫
	GoToXY(38, 18);
	putc(186, stdout);//║
	GoToXY(43, 17);
	putc(197, stdout);// ┼
	GoToXY(43, 18);
	putc(179, stdout);// │
	GoToXY(48, 17);
	putc(197, stdout);// ┼
	GoToXY(48, 18);
	putc(179, stdout);// │
	GoToXY(53, 17);
	putc(182, stdout);// ╢
	GoToXY(53, 18);
	putc(186, stdout);//║ 



					  //  ╠════╪════╪════╬════╪════╪════╬════╪════╪════╣
					  //  ║ 0  │ 9  │ 6  ║ 0  │ 0  │ 1  ║ 0  │ 0  │ 0  ║

	GoToXY(8, 19);
	putc(200, stdout);//╟
   
	GoToXY(9, 19);
	for (int c = 0; c <= 44; c++)
	{
		putc(205, stdout);// ─
	}
	GoToXY(13, 19);
	putc(207, stdout);// ┼

	GoToXY(18, 19);
	putc(207, stdout);// ┼

	GoToXY(23, 19);
	putc(202, stdout);// ╫

	GoToXY(28, 19);
	putc(207, stdout);// ┼

	GoToXY(33, 19);
	putc(207, stdout);// ┼

	GoToXY(38, 19);
	putc(202, stdout);// ╫

	GoToXY(43, 19);
	putc(207, stdout);// ┼

	GoToXY(48, 19);
	putc(207, stdout);// ┼

	GoToXY(53, 19);
	putc(188, stdout);// ╢
 
	
	printf("\n\t----------------------------------------------");
	printf("\n\tTab: Menu / ESC: Exit  / H: Hilfe / L: Loesen / P: Pruefen\n\tTipp: T(   mal uebrig)");
	SetConsoleTextAttribute(hConsole, BACKGROUND_RED);

	GoToXY(61, 12);
	putc(176, stdout); 
	GoToXY(62, 12);
	putc(176, stdout);
	GoToXY(63, 12);
	putc(176, stdout);// ░
	GoToXY(64, 12);
	putc(176, stdout);
	GoToXY(60, 12);
	putc(176, stdout);//░
	GoToXY(60, 13);   
	putc(176, stdout);//░
	GoToXY(60, 14);
	putc(176, stdout);//░
	GoToXY(60, 15);
	putc(176, stdout);//░
	GoToXY(60, 16);
	putc(176, stdout);//░
	GoToXY(65, 12);
	putc(176, stdout);//░
	GoToXY(65, 13);
	putc(176, stdout);//░
	GoToXY(65, 14);
	putc(176, stdout);//░
	GoToXY(65, 15);
	putc(176, stdout);//░
	GoToXY(65, 16);
	putc(176, stdout);//░
	GoToXY(61, 16);
	putc(176, stdout);
	GoToXY(62, 16);
	putc(176, stdout);
	GoToXY(63, 16);
	putc(176, stdout);// ░
	GoToXY(64, 16);
	putc(176, stdout);



	GoToXY(67, 12);
	putc(176, stdout);
	GoToXY(68, 12);
	putc(176, stdout);
	GoToXY(69, 12);
	putc(176, stdout);// ░
	GoToXY(70, 12);
	putc(176, stdout);
	GoToXY(71, 12);
	putc(176, stdout);//░
	GoToXY(67, 13);
	putc(176, stdout);//░
	GoToXY(67, 14);
	putc(176, stdout);//░
	GoToXY(67, 15);
	putc(176, stdout);//░
	GoToXY(67, 16);
	putc(176, stdout);//░
	GoToXY(71, 12);
	putc(176, stdout);//░
	GoToXY(71, 13);
	putc(176, stdout);//░
	GoToXY(71, 14);
	putc(176, stdout);//░
	GoToXY(67, 14);
	putc(176, stdout);
	GoToXY(68, 14);
	putc(176, stdout);
	GoToXY(69, 14);
	putc(176, stdout);// ░
	GoToXY(70, 14);
	putc(176, stdout);



	GoToXY(73, 12);
	putc(176, stdout);//░
	GoToXY(73, 13);
	putc(176, stdout);//░
	GoToXY(73, 14);
	putc(176, stdout);//░
	GoToXY(73, 15);
	putc(176, stdout);//░
	GoToXY(73, 16);
	putc(176, stdout);//░
	GoToXY(78, 12);
	putc(176, stdout);//░
	GoToXY(78, 13);
	putc(176, stdout);//░
	GoToXY(78, 14);
	putc(176, stdout);//░
	GoToXY(78, 15);
	putc(176, stdout);//░
	GoToXY(78, 16);
	putc(176, stdout);//░
	GoToXY(73, 16);
	putc(176, stdout);
	GoToXY(74, 16);
	putc(176, stdout);
	GoToXY(75, 16);
	putc(176, stdout);// ░
	GoToXY(76, 16);
	putc(176, stdout);
	GoToXY(77, 16);
	putc(176, stdout);


	GoToXY(80, 12);
	putc(176, stdout);
	GoToXY(81, 12);
	putc(176, stdout);
	GoToXY(82, 12);
	putc(176, stdout);// ░
	GoToXY(83, 12);
	putc(176, stdout);
	GoToXY(84, 12);
	putc(176, stdout);//░
	GoToXY(80, 13);
	putc(176, stdout);//░
	GoToXY(80, 14);
	putc(176, stdout);//░
	//GoToXY(80, 15);
	//putc(176, stdout);//░
	GoToXY(80, 16);
	putc(176, stdout);//░
	GoToXY(85, 12);
	putc(176, stdout);//░
	//GoToXY(85, 13);
	//putc(176, stdout);//░
	GoToXY(85, 14);
	putc(176, stdout);//░
	GoToXY(85, 15);
	putc(176, stdout);//░
	GoToXY(85, 16);
	putc(176, stdout);//░
	GoToXY(81, 16);
	putc(176, stdout);
	GoToXY(82, 16);
	putc(176, stdout);
	GoToXY(83, 16);
	putc(176, stdout);// ░
	GoToXY(84, 16);
	putc(176, stdout);

	GoToXY(81, 14);
	putc(176, stdout);
	GoToXY(82, 14);
	putc(176, stdout);
	GoToXY(83, 14);
	putc(176, stdout);// ░
	GoToXY(84, 14);
	putc(176, stdout);

	SetConsoleTextAttribute(hConsole, saved_attributes);
		//for (int c = 170; c <= 220; c++)
		//{
		//	printf("  ");
		//	putc(c, stdout);
		//}

}
