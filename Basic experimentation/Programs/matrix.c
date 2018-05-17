#include<stdio.h>
void addition(int a[10][10] ,int b[10][10],int x,int y)
{
   int sum[10][10],j,i;
   //summing up all elements of both matrix 
   //printf("Got in the loop");
   for(i=0;i<x;i++){
    for(j=0;j<y;j++)
	{   
	 sum[i][j]=a[i][j]+b[i][j];
	 //printf("got in");
	}}
    printf("Resultant matrix is \n"); 
    for(i=0;i<x;i++)
   {
    for(j=0;j<y;j++)
       { printf("%d   ",sum[i][j]);
        }
        printf("\n");
        } 
      }

void substraction(int a[10][10] ,int b[10][10],int x,int y)
{
   int sum[10][10],j,i;
   //summing up all elements of both matrix 
   //printf("Got in the loop");
   for(i=0;i<x;i++){
    for(j=0;j<y;j++)
        {   
         sum[i][j]=a[i][j]-b[i][j];
         //printf("got in");
        }}
   printf("Resultant matrix is \n");
   for(i=0;i<x;i++)
   {
    for(j=0;j<y;j++)
       { printf("%d   ",sum[i][j]);
        }
        printf("\n");
        } 
      }
//Function Prototype
void multiplication(int c[10][10],int d[10][10],int x,int y,int z);

void  main()
{
  int a[10][10],b[10][10];
  int i,j,m,n,p,q,cho;
  printf("\t\t\t  Matrix operation -- FOR class 12 students \n");
  printf("Created by Kurian Benoy ==(Beta version 1.1)\n"); 
  printf("Enter your choice\n1.Matrix Addition \n2.Matrix Subtractiion \n3.Matrix Multiplication\n4.Matrix Division\n ");
 
  scanf("%d",&cho);
  printf("Enter no of rows of 1st Matrix \n");
  scanf("%d",&m);
  printf("Enter no of columns of 1st Matrix \n");
  scanf("%d",&n);
  printf("Enter no of rows of 2nd  Matrix \n");
  scanf("%d",&p);
  printf("Enter no of columns of 2nd  Matrix \n");
  scanf("%d",&q);
 
  //Entering elements of 2 matrixes
  printf("Enter the elements of matrix 1\n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  printf("Enter the elements of matrix 2\n");
  for(i=0;i<p;i++)
   for(j=0;j<q;j++)
     scanf("%d",&b[i][j]);

  // The choicing elements of matrix
  switch(cho)
  {
  case 1:if((m!=p)&&(n!=q))
		printf("Matrix Additon is not possible \n");
         else{ 
               addition(a,b,m,n);
		}
         break;
 case 2:if((m!=p)&&(n!=q))
                printf("Matrix Subtraction is not possible \n");
         else{ 
               substraction(a,b,m,n);
                }
         break;
 case 3:if(n!=p)
	       printf("Matrix Multiplication is not possible \n");
        else{
             multiplication(a,b,m,q,n);
		}       
	 break;

 
}
}

//Matrix Multiplication Function  definition
void multiplication(int  c[10][10],int d[10][10],int x,int y,int z)
{
   int mult[10][10],i,j,k;
   for(i=0;i<x;i++)
    for(j=0;j<y;j++)
      mult[i][j]=0;
   for(i=0;i<x;i++)
      {for(j=0;j<y;j++){
         for(k=0;k<z;k++){
		mult[i][j]+= c[i][k]*d[k][j];
           }}}
   printf("Resultant multiplied matrix is \n");
   for(i=0;i<x;i++)
   {
    for(j=0;j<y;j++)
    {  printf("%d  ",mult[i][j]);
    }
    printf("\n");
    }
}


