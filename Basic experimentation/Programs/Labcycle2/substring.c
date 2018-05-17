
#include<stdio.h>
#include<string.h>
void main()
{

char str[10],subs[10];
int i,j,lens,flag,len;


printf("Enter the string\n");
scanf("%s",str);
printf("Enter substring\n");
scanf("%s",subs);
lens=strlen(subs);
len=strlen(str);
for(i=0;i<len-2;i++)
{  
  for(j=i+1;j<i+lens+1;j++){
      flag=1;
      if(str[j]!=subs[j])
        flag=0;
       }
        
      if(flag==1){
              printf("Substring is found \n");
              break;
                }
      else if(flag==0)
              { printf("Substring is not found\n");
                 break;}
      }
}
