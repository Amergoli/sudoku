

#include<stdlib.h>
#include<stdio.h>
#include "header.h"

void showEntry(struct fieldObject* fobject,int objectnum)
{
  int i;
  printf("|Index||x| |Y||NAME|\n");
  for(i=0;i<objectnum;i++)
  {

    printf("[%2d]  %3d:%3d:%s\n",i+1,fobject[i].xVal,fobject[i].yVal,fobject[i].objekt);
  }

}
