#include<stdlib.h>
#include<stdio.h>
#include "header.h"


/**
* Diese Funktion überprüft die Ausgaben der Funktionen (passende Zahlen in Zeile, Spalte, Box), int getNumObject(), intgetNumObjectspalte() und int getNumObjectzeile(), auf Gleichheit.
* Dieser Vorgang wird wiederholt bis die drei Funktionen alle dieselbe Zahl ausgeben.
* Bei Gleichheit wird die entsprechende
* Zahl ausgegeben, bei Ungleichheit wird -1 ausgegeben.
*
* @param fobject ist das Sudoku.
* @param index ist Index einer Stelle des Sudokus.
* @param xzahl ist die Zahl, die mit den Elementen im Feld verglichen wird. Das muss kleiner als 10 sein.
* @return  eine passende Zahl, oder -1.
*/

int zsuche(int fobject[], int index,int xzahl)
{
	int i, oben = -1, zahl1 = 0, zahl2 = 0, zahl3 = 0;
	
	xzahl = xzahl + 1;	
	if (xzahl > 9)
	{
		return - 1; //xzahl ist die Zahl, die wir mit den Elementen im Feld verglelichen. Das muss kleiner als 10 sein!
	}
	do	
	{
		zahl1 = getNumObjectzeile(fobject, index, xzahl);
		xzahl = zahl1;
		if (zahl1 == -1)
			break;		
		zahl2 = getNumObjectspalte(fobject, index, xzahl);
		xzahl = zahl2;
		if (zahl2 == -1)
			break;		
		zahl3 = getNumObject(fobject, index, xzahl);
		xzahl = zahl3;
		if (zahl3 == -1)
		{
			break;			
		}
	} while (zahl1 != zahl2 || zahl2 != zahl3); //zahl1: Ergebniss der Suche in Zeile. zahl2: Ergebniss der Suche in Spalte
	if (zahl3 == 9 && xzahl == -1 && index <= 0)
	{
		printf("To Gu Bixo");
		getchar();
	}
	 return xzahl;                              //zahl3: Ergebniss der Suche in der Box
	}