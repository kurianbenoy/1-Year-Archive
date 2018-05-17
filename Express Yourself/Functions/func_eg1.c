#include<stdio.h>
#define MAXLINE 1000

int getline1(char line[],int max);
int strindex(char source[],char searchfor[]);
char line[]="how could you be?\n Wher could\n how can you");
char pattern[]= "ould";

/*find all lines matching pattern*/

main()
{ 

   char line[MAXLINE];
   int found=0;
   // printf("Enter a line\n");
   // gets(line);

   while(getline1(line,MAXLINE) >0)
     if(strindex(line,pattern) >=0){
        printf("%s",line);
        found++;
        }
     return found;
}


int getline1(char s[],int lim)
{  
  int c,i;
  i=0;
  while(--lim>0 && (c=getchar()) !=EOF &&c!='\n')
    s[i++] =c;
  if (c=='\n')
    s[i++]=c;
  s[i] ='\0';
  return i;
}

/* strindex: return index of t in s,-1 if none */

int strindex(char s[],char t[])
{
  int i,j,k;

  for(i=0;s[i]!='\0';i++){
    for(j=i,k=0;t[k]!='\0'&& s[j]==t[k]; j++,k++)
     {
       if(k>0 && t[k] =='\0')
         return i;
     }}
return -1;
}

