


#include<stdlib.h>
#include<stdio.h>
#include "header.h"

/** 
* Gibt den Index der ersten Nullstelle aus.
*
* @param fobject ist das Sudoku.
* @return Index der erste Nullstelle.
*/


int findDataSud(int fobject[])
{
  int i,j=0;


  for(i=0;i<81;i++)
  {
    
    if (fobject[i]==0)
    {
      j=i;
      i=81;
    }
  }
return j;
}
