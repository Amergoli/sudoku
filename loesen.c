#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <time.h>
#include "Header.h"

/**
* Organisiert beide Algorithmen zur Loesung des Sudokus.
*
* @param feld[] enthaelt das Sudoku.
* @param leerPos[] enthaelt Indizes der Leerstellen.
* @param loesung[] enthaelt das Sudoku.
* @param Anzahl0Element ist die Anzahl der Leerstellen.
* @param Letzt0Element ist der Index der letzten Leerstelle.
* @param up ist das oberste Element vom Stack.
* @return -1, wenn es keine Loesung gibt, sonst keine Ausgabe.
*/

int loesen( int leerPos[], int loesung[], int feld[], int Anzahl0Element, int *up, int Letzt0Element)
{
	int ZwischenE, i=0;
	//****************************************************************************************************
	//Loesung wird vor allem geloest und in Feld loesung gespeichert.                                   //                                    
	//
	//folgenede drei Funktionen finden moegliche leer Stellen, zu denen genau eine Zahl passt. //
	if (Anzahl0Element >= 60)																			//
	{																									//
		box0Feld(loesung, 0);// Sudoku wird box nach box durchgesucht.                                  //
		zeile0Feld(loesung, 0);// Sudoku wird Zeile nach Zeile durchgesucht.                            //
		spalte0Feld(loesung, 0); //Sudoku wird Spalte nach Spalte durchgesucht.				     		//	
	}																					            	//
	if ((ZwischenE = rechner(loesung, Letzt0Element, up, Anzahl0Element)) == 0)							//
	{
		showEntryList(feld, leerPos[i]);																//
		massage("Das Sudoku hat keine Loesung", 16, 13);    //
		getchar();
		return -1;																						//
	}																									//
	else if (ZwischenE == 1)																			//
	{																									//
		showEntryList(feld, leerPos[i]);																//
	}																									//
																										//Mehrdeutigkeitspruefung																			//
	if (Anzahl0Element >= 65)																			//
	{																									//
		massage("Das Sudoku hat mehr als eine Loesung. Drucke Enter, um weiter zu machen.", 8, 23);     //
		getchar();																						//
		system("cls");																					//
	}																									//
	*up = -1;//inhalt des Stacks wird  geloescht.														//
			 //****************************************************************************************************

}