// tada another question

#include<stdio.h>

void main()
{

  int a[10][10],m,n,i,j;
  scanf("%d%d",&i,&j);
  printf("Elements are");
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
   printf("Transpose is \n");
   for(i=0;i<m;i++)
   for(j=0;j<n;j++){
        printf("%d",a[j][i]);
          }
}

