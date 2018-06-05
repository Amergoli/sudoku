
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include"Header.h"
/**
* Diese Funktion nimmt die oben genannten zwei Felder in die Funktion und erzeugt damit eine Textdatei, welche  in zwei Teile gesplittet ist. 
* Der erste Teil ist das 
* teilweise gelöste Sudoku und der zweite Teil ist das 
* ursprüngliche Sudoku, also nur mit den vorgegebenen Werten.
*
* @param feld[] ist das Sudoku.
* @param leerPos[] enthaelt Indizes der Leerstellen.
* @param loesung[] enthaelt die Eingaben des Spielers.
*/

void speichern(int feld[],int leerPos[],int loesung[])
{

	FILE *fptr;
	char name[20];
	int age,i,j=0;
	float salary;

	/*  open for writing */
	fptr = fopen("text.txt", "w");

	if (fptr == NULL)
	{
		printf("File does not exists \n");
		return;
	}
	for (i = 0; i < 81; i++)
	{
		if (feld[i] == 0)
		{
			fprintf(fptr, ".");
			j++;
		}
		else
		{
			if (i<leerPos[j])
		        fprintf(fptr, "%d", feld[i]);
			else if (i == leerPos[j])
			{
				fprintf(fptr, "%d", feld[i]);
				j++;
			}
		}
	}	
	for (i = 0; i < 81; i++)
	{
		if (loesung[i] == 0)
		{
			fprintf(fptr, ".");
			j++;
		}
		else
		{
			fprintf(fptr, "%d", loesung[i]);
			j++;
		}

	}

	fclose(fptr);























	//if (file) {
	//	for (i = 0; i < 81; i++)
	//	{
	//		//printf("\n");//
	//		//c = getc(file);//liest eine zeile weiter

	//		if ((c = getc(file)) != EOF)//
	//		{
	//			element = c;
	//			if (element == 46)
	//			{
	//				feld[i] = 0;
	//			}
	//			else
	//				if (element >= 48 && element <= 57)
	//				{
	//					feld[i] = element - 48;
	//				}
	//				else
	//				{
	//					//printf("problematische Eingabe aus Textdatei!");
	//				}

	//			//printf("%d", feld[i][j]);
	//		}
	//	}
	//	fclose(file);
	//}

}