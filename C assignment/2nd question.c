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
    int i1=5,i2=3;
	float f1=2.75,f2=0.05;
	char c1='a',c2='j';
	float x1,x2,x3,x4;
	x1=(i1-i2)*4-3*(c1-c2);
	x2=(f1-f2)&&(i1-i2);
	x3=!(c1>0);
	x4=(i1++ +f2)/(f1-f2);
	printf("%f \n%f \n%f \n%f \n",x1,x2,x3,x4);
    return 0;
}

