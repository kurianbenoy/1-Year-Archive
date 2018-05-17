// sample program to print array using pointers

#include<stdio.h>

void main()
{
  static int x[10]={10,11,12,13,14,15,16,17,18,19};
  int i;
  for(i=0;i<=9;i++)
  {
     printf("\n %d  or pointer: %d",x[i],*(x+i));
   }

}
