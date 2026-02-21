#include<stdio.h>
#include<conio.h>
int main()
{
   double No = 0;
   char Name[20]=" ";

   printf("\n size for no variable is =%d",sizeof(No));
   printf("\n size for int is =%d",sizeof(int));
   printf("\n size for chat is =%d",sizeof(char));
   printf("\n size for void is =%d",sizeof(void));
   printf("\n size for short int is =%d",sizeof(short int));
   printf("\n size for name string is =%d",sizeof(Name));

   getch();
   return 0;

}
