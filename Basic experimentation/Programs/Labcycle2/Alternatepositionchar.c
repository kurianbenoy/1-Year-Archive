#include<stdio.h>

main()
{
char ch[100],g;
int i;
printf("Enter the string\n");
gets(ch);
printf("Enter the character to enter \n");
g=getchar();
for(i=0;ch[i]!='\0';i++)
  {	if(i%2==0)
	    ch[i]=g;
	
}

printf("New string is \n");
puts(ch);
}

