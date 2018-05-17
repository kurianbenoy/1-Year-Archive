



/****************************************************************************
 *                                                                          *
 * Write a program for the following:
	1. To find the factors of a given number                                          *
 *                                                                          *
 ****************************************************************************/
#include<stdio.h>
int main(int argc, char *argv[])
{	
	int n,i;
    scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		if(n%i==0)
			printf("%d is a factor \n",i);
	}
	return 0;
}


