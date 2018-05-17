#include<stdio.h>

struct person
{ int age;
  char name[100],gender;
 }r;

int main()
{
  struct person r;
  printf("Enter the details of person\n");
  scanf("%s%d",r.name,&r.age);
  printf("Enter gender\n");
  r.gender=getchar();
  printf("Details of students are: \n");
  printf("%s\n%d\n%c",r.name,r.age,r.gender);
  return 0;
 }
