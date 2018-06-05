#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include "Header.h"


/**
* Diese Funktion liest Tastaturbefehle ein und startet die entsprechende Funktion. 
* Ebenso wird das Menü aufgerufen.
*
* @param fobject[] ist das Feld, das mit den Vorgaben des Sudokus belegt ist.
* @param up ist das oberste Element des Stacks.
* @return 0 fuer erneuter Spielbeginn, -1 um Programm zu beenden.
*/



int getcharakter(int fobject[],  int* up)
{
	int feld[81] = {0}, loesung[81], speicherStand[81];//"feld" enthaelt das Sudoku evtl. Speicherstand.
	int charakter = 0, i = 0, ZwischenE, menuFeed;
	int tippZaehler = 10;
	char temp, name[20];
	int Anzahl0Element = 0,//Anzahl der Elementen im Feld, die Null sind.
		leerPos[81],//ein Feld, in dem die Indexe der Nullstellen speichert werden.		
		Letzt0Element = 0,//das letzte Element im feld, das Null ist.
		*le , *an0E ;

	int LleerPos[81],
		LAnzahl0Element = 0,
		LLetzt0Element = 0;
	    le = &Letzt0Element;
	    an0E = &Anzahl0Element;
	

	struct Menu hauptmenu[] = { "   Schwerigkeit    "
							   ,"Speicherstand laden"
	                           ,"     schliessen    " };

	struct Menu SpielMenu[] = { "    neues Spiel    "
							   ,"      Speichern    "
							   ,"     schliessen    " };

	//*****************************************Ausgabe von Menue***********************************************
	menuFeed = Menu(60, 2, hauptmenu, sizeof(hauptmenu) / sizeof(struct Menu));
	if (menuFeed == 2 || menuFeed == -1)
		return -1;

	//************************************schwierigkeitsgrad waehlen*******************************************
	if (menuFeed == 0)
			menuFeed=SchwierigkeitsGrad(menuFeed, loesung, speicherStand, feld);
	
	//**********************************************Laden******************************************************
	if (menuFeed == 1)
			read(feld, "text.txt", loesung,  speicherStand);
	
	if (menuFeed == -1)
	{
		system("cls");
		return 0;
	}
	if (menuFeed == 10)
	{
		return 0;
		getchar();
	}
	//Anzahl der Nullstellen wird ermittelt und Index der Nullstellen wird im Feld "leerPos" geschrieben.
	FeldEingenschaften(loesung, leerPos, an0E, le);
	system("cls");
	showEntryList(feld, leerPos[0]);
	massage("Warten Sie bitte, Sudoku wird vorbereitet...", 8, 10);


	//*******************************Sudoku wird geloest und gespeichert***************************************
	loesen( leerPos, loesung, feld, Anzahl0Element, up, Letzt0Element);

	i = 0;
	system("cls");
	showEntryList(feld, leerPos[i]);

	GoToXY(16, 22);
	printf("%d ", tippZaehler);
	//****************************Cursor wird zur richtigen Stelle gebracht.***********************************
	GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);


	//****************************************Tastatureingabe**************************************************
	do {
		//system("cls");
		//showEntryList(feld, leerPos[i]);		
		GoToXY(8, 23);
		printf("                                                                                                 ");//Anweisungen loeschen


	// ********************************************Menue*******************************************************
		if (charakter == 9)// wenn Tab gedruckt wird, wird Menue gezeigt.
		{
 			menuFeed = Menu(60, 2, SpielMenu, sizeof(SpielMenu) / sizeof(struct Menu));
			if (menuFeed == 0)
			   return 0;

		//********************************hier soll das Sudoku gespeichert werden.************************
			else if (menuFeed == 1)
			{
				speichern(feld, leerPos,speicherStand);
				return 0;
		//******************************************Schliessen***********************************************
			}
			else if (menuFeed == 2)
				return -1;			

			else if (menuFeed == -1)
				showEntryList(feld, leerPos[i]);
			
		}

	//*********************Das Sudoku wird automatisch geloest, wenn L gedruckt wird.**************************
		if (charakter == 108)
		{
			showEntryList(loesung, leerPos[i]);
			massage("\n\t\tSudoku Wurde automatisch geloest!", 8, 23);
			return 0;
		}

	//***************************Navigation im Feld nach rechts.*********************************
		if (charakter == 77)
			i = NaviRechts(i, charakter, leerPos, Anzahl0Element, feld);

		
	//***************************Navigation im Feld nach links.**********************************
		if (charakter == 75)
			i=NaviLinks(i, charakter, leerPos, Anzahl0Element, feld);
		

	//**************************Navigation im Feld nach unten.***********************************
		if (charakter == 80)
			i = NaviDown(i, charakter, leerPos, feld);
		

	//**************************Navigation im Feld nach oben.************************************

		if (charakter == 72)
			i=NaviUp(i, charakter, leerPos, feld);
		

	//*********************************hier werden die Zahlen eingegeben.**************************************
		if (charakter >= 48 && charakter <= 57)
			i = Zahleingabe(i, leerPos, Anzahl0Element, Letzt0Element, charakter, feld);
		
	//********************************************Hilfe****************************************************
		if (charakter == 104)
		{
			system("cls");
			anleitung(20, 2);
			massage("Druecke eine beliebige Taste, um zurueck zum Spiel zu gelangen.", 20, 20);
			getch();
			system("cls");
			showEntryList(feld, leerPos[i]);
		}

	//*************************************************Tipp****************************************************

		GoToXY(((leerPos[i] - ((leerPos[i] / 9) * 9)) * 5) + 10, 2 * (leerPos[i] / 9) + 2);
		if (charakter == 116)
			tippZaehler = Tipp( i, leerPos, loesung, tippZaehler);
		GoToXY(16, 22);
		printf("%d ", tippZaehler);



		
	//***********************hier wird die von Spieler eingegebene Loesung geprueft.***************************
		if (charakter == 112)
			pruefen(feld, loesung);


	
		charakter = getch();
	} while (charakter != 27);

	return -1;
}
