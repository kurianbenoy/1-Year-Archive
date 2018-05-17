#include<stdio.h>

struct students{
  char name[30];
  int roll;
}stud[25];

void main()
{ 
  int i,n;
  printf("Enter the no of students\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
   printf("Enter Details of students\n");
   scanf("%s%d",stud[i].name,&stud[i].roll);}
  printf("Details of students are: \n");
  for(i=0;i<n;i++)
    printf("%s%d\n",stud[i].name,stud[i].roll);
  }
