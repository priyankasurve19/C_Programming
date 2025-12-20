#include<stdio.h>
#include<conio.h>
int main()
{
  float Fahrenheit=0.0, cel =0.0;
  printf("\n Enter Temperature in celcius =");
  scanf("%f", &cel);
  
  Fahrenheit=(cel *(9.0/5.0))+32.0;
  printf("\n Temperature in Fahrenheit into Celsius is = %f",cel);
  getch();
  return 0;
}