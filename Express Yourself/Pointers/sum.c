#include<stdio.h>

void main()
{
  int *a,*b,i,j,sum;
  printf("Enter two nos\n");
  scanf("%i%i",&i,&j);
  a=&i;
  b=&j;
  sum=*a+*b;
  printf("Sum of two nos is %d",sum);
  }
