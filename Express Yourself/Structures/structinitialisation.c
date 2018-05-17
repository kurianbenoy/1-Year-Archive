#include<stdio.h>
struct date{
  int month;
  //int year;
  };
   

struct account
{
  int acct_no;
  //char acct_type;
  //char name[80];
  float balance;
  struct date lastpayment;
} old,newcustomer;

void main()
{
printf("Enter the details\n");
scanf("%d%f%d",&old.acct_no,&old.balance,&old.lastpayment.month);

printf("Details are\n");
printf("%d\n%f",old.acct_no,old.balance);

}
