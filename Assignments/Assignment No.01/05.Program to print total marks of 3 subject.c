#include<stdio.h>
#include<conio.h>
int main()
{
   int Marathi=0, English=0, Hindi=0, Total=0;
   float per;
   
   printf("\n Enter Marathi marks ");
   scanf("%d",&Marathi);
   
   printf("\n Enter English marks");
   scanf("%d",&English);
   
   printf("\n Enter Hindi marks");
   scanf("%d",&Hindi);
   
   printf("\n Enter percentage of marks");
   scanf("%f",&per);
   
   Total= Marathi + English + Hindi;
   per= (float)Total/3;
   
   printf("\n Total:%d+%d+%d=%d", Marathi, English, Hindi);
   
   printf("\n percentage:%f",per);
   getch();
   return 0;
}
   
   
   
   
   
   
