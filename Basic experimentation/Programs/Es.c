#include<stdio.h>
void main()
{
  char ch=250;
  int ans;
  ans=ch+++!ch+~ch+++ch;
  printf("%d\n",ans);
}
