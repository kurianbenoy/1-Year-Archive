// Predict the output question
#include<stdio.h>
void main()
{
  int i,j,*ptr,*ptr1,sum,i1,j1;
  ptr=&i;
  ptr1=&j;
  printf("Enter two nos\n");
  scanf("%d%d",&i,&j);
  scanf("%d%d",&(*ptr),&(*ptr1));
  sum=*ptr+ *ptr1;
  printf("Sum is :%d",sum);
  // printf("%d%d",i,j);
  sum=i+j;
  printf("Sum is :%d",sum);
 } 
