#include<stdio.h>
#include<math.h>
// Works only for integers
int main()
{
   int  hexadecimal,decimal=0,count=0,remainder;
   printf("Enter the hexadecimal no \t");
   scanf("%d",&hexadecimal);
   for(count=0;hexadecimal>0;count++)
   {  remainder=hexadecimal%10;
      decimal=decimal+ remainder * pow(16,count);
      hexadecimal/=10;
    }
    printf("\n Decimal Equivalent: \t %d ",decimal);
   return 0;
} 	
