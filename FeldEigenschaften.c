
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include"Header.h"

/**
* Diese Funktion ermittelt die Anzahl der LeerStellen, ein Index der letzten leeren Stelle im Feld und erzeugt ein Feld, das die Indizes aller leeren Stellen enthaelt.
* Die Funktion „FeldEigenschaften“ ermittelt die Anzahl der 
* leeren Stellen und schreibt diese Zahl in die Variable 
* „Anzahl0Element“. Des Weiteren wird ein Feld „leerPos“ 
* erstellt. Der Index der letzten leeren Stelle wird auf 
* „Letzt0Element“ gespeichert.
*
* @param feld[] enthaelt das Sudoku.
* @param leerPos[] enthaelt Indices der Leerstellen.
* @param Anzahl0Element ist die Anzahl der Leerstellen.
* @param Letzt0Element ist der Index der letzten Leerstelle.
*/



void FeldEingenschaften(int feld[],int leerPos[],int *Anzahl0Element,int *Letzt0Element)
{
	int c, i, j = 0, element;
	for (i = 0; i <= 80; i++)
	{
		if (feld[i] == 0)
		{
			leerPos[*Anzahl0Element] = i;// Anzahl Nullelemente ist zuerst Null.
			*Anzahl0Element= *Anzahl0Element+1;
			*Letzt0Element = i;

		}
	}


}