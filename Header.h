#ifndef HEADER.H
#define HEADER

  struct stack {
				int xVal;
				int yVal;
				int num;
				int index;
						  };

  struct Menu {
	           char name[20];
                             };
  int *up;
  struct stack* empty(char* up);          
  void pop(struct stack *stack_1, char* up);  
  void push(struct stack *stack_1, int num, int x, int y, char* up, int index); 
  void init(int fobject[], int index, int szahl);
  int  Xbox(int fobject[], int index1, int anfang);
  void read(int feld[], char fileName[], int loesung[], int speicherStand[]);
  int  Menu(int x, int y, struct Menu hauptmenu[], int laenge);
  int  Tipp(int i, int leerPos[], int loesung[], int tippZaehler);
  int  Xzeile(int fobject[], int index, int anfang);
  void GoToXY(int column, int line);
  int  zsuche(int fobject[], int index, int xzahl);
  int  NaviUp(int i, int charakter, int leerPos[], int feld[]);
  int  loesen( int leerPos[], int loesung[], int feld[], int Anzahl0Element, int *up, int Letzt0Element);
  int  rechner(int ob[], int Letzt0Element, char *up, int leanth);
  int  Xspalte(int fobject[], int index, int anfang);
  void pruefen(int feld[], int loesung[]);
  void massage(char text[], int x, int y);
  int  is_empty(struct stack *stack_1, char* up);
  int  BoxWerte(int index, int *x, int *y);
  int  NaviDown(int i, int charakter, int leerPos[], int feld[]);
  int  box0Feld(int fobject[], int Anzahl0);
  void speichern(int feld[], int leerPos[], int loesung[]);
  void anleitung(int x, int y);
  int  NaviLinks(int i, int charakter, int leerPos[], int Anzahl0Element, int feld[]);
  int  NaviRechts(int i, int charakter, int leerPos[], int Anzahl0Element, int feld[]);
  int  zeile0Feld(int fobject[], int Anzahl0);
  int  Zahleingabe(int i, int leerPos[], int Anzahl0Element, int Letzt0Element, int charakter, int feld[]);
  int  findDataSud(int fobject[]);
  int  spalte0Feld(int  fobject[], int Anzahl0);
  int  getNumObject(int fobject[], int index, int anfang);
  int  getcharakter( int fobject[], int* up);
  int  BoxGultigkeit(int feld[], int index, int Wert);
  void showEntryList(int fobject[], int indexpointer);
  int  funktionvollPos(int feld[], int vollPos[]);
  int  ZeileGultigkeit(int feld[], int index, int Wert);
  int  SpalteGultigkeit(int feld[], int index, int Wert);
  int  getNumObjectzeile(int fobject[], int index, int anfang);
  int  getNumObjectspalte(int fobject[], int index, int anfang);
  void FeldEingenschaften(int feld[], int leerPos[], int *Anzahl0Element, int *Letzt0Element);
  int  SchwierigkeitsGrad(int menuFeed, int loesung[], int speicherStand[], int feld[]);



#endif // !HEADER.H
#pragma once
