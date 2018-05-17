#include<stdio.h>

void main()
{
   int n,i,j,temp;
   int a[100];
   printf("Enter the no limit\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   { printf("Enter the elements\n");
     scanf("%d",&a[i]);}
   for(i=0;i<n-1;i++)
   { for(j=i+1;j<n;j++)
      {
       if(a[i]>a[j])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
     }
   }
   printf("sorted in ascending order\n ");
   for(j=0;j<n;j++)
     printf("%d",a[j]);

} 
