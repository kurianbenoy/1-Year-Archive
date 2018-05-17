#include<stdio.h>
void main()
{
  int A[10][10],B[10][10],sum[10][10];
  int m,n,p,q,i,j,k;
  printf("Enter the no of rows and columns: A\n");
  scanf("%d%d",&m,&n);
  printf("Enter the no of rows and columns : B\n");
  scanf("%d%d",&p,&q);
  if (n!=p)
   {printf("Matrix Multiplication is not Possible \n");
     	}
  else{
  printf("Enter the elements of 1st matrix\n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&A[i][j]);
  printf("Enter the elements of 2nd matrix\n");
  for(i=0;i<p;i++)
   for(j=0;j<q;j++)
      scanf("%d",&B[i][j]);
  //Matrix Multiplication operation
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
     sum[i][j]=0; 
  for(i=0;i<m;i++){
    for(j=0;j<q;j++){
      for(k=0;k<n;k++){
	sum[i][j]+= A[i][k]*B[k][j];
	}}}
  printf("Multiplied Matrix\n");
  
 for(i=0;i<m;i++){
	for(j=0;j<q;j++){
		printf("%d    ",sum[i][j]);
		}
	printf("\n");
	}
	}	
}
		


