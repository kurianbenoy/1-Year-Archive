/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    int x=1,a=1,b=1,d=1,p=1,q=1,m=1,r=1,f=1,c=1;
	float x1=0.0;
	printf("%d \n",(x+(a*b)-(2*d)*(p-3*q)));
	x1=(8.8*(a+b)+(2/c) -0.5 +(2*a)*m/((q+r)*(a+b)*f));
	printf("%f",x1);
    return 0;
}

