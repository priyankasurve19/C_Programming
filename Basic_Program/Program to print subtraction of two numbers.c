#include<stdio.h>
#include<conio.h>
int main()
{
   int Num1=0,Num2=0,Sub=0;
   
   printf("\n Enter 1st number ");
   scanf("%d",&Num1);
   
   printf("\n Enter 2nd number ");
   scanf("%d",&Num2);
   
   Sub = Num1 - Num2;
   
   printf("\n subtraction:%d*%d=%d",Num1,Num2,Sub);
   getch();
   return 0;
}