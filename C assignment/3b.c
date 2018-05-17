



/****************************************************************************
 *                                                                          *
 * Write a program for the following:
	1. To find the factors of a given number                                          *
 *                                                                          *
 ****************************************************************************/
#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{	
	int n,rev=0,palindrome=0,a=0,temp;
 	printf("Enter a no \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
		++a;
	}
	printf("Reverse is %d \n",rev);
	palindrome=temp*pow(10,a)+rev;
	printf("Palindrome is: %d",palindrome);
	return 0;
}


