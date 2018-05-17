// A program to obtain x^n using recurssion
#include<stdio.h>

int pow_x(int ,int);
void main()
{
  int x,n,a;
  printf("Enter the value of x\n");
  scanf("%d",&x);
  printf("Enter the power \n");
  scanf("%d",&n);

  a=pow_x(x,n);
  printf("Value of x^n =%d",a);
}

int pow_x(int a ,int b)
{
  if(b==1)
    return a;
  else
    return (a*pow_x(a,b-1));
}
