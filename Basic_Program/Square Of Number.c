#include <stdio.h>
#include<conio.h>
int main()
{
  int Num = 0, Square= 0;
  
  printf("\n Enter the Number");
  scanf("%d",&Num);
  
  Square = Num * Num;
  
  printf("\n Square : %d * %d",Num , Square);
  
  getch();
  return 0;
}