#include<stdio,h>
void main()
{
int mat[3][3],row,col
printf(Enter  the matrix:\n)
for(row=0;row<3;row+
{
for(col=0;col<3;col+
{
printf(Enter value:)
scanf(mat[row][col]
}
}
printf(The real matrix\n)
for(row=0row<3;row++)
{
for(col=0;col<3;col++0
{
printf(%d,mat[row][col])
}
printf(\n);
}
printf(The ninety degree rotated matrix is:\n);
