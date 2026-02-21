#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='\0';
    printf("\n Enter a character :");
    ch=getch();

    printf("\n Decimal : %d",ch);
    printf("\n Hexadecimal : %x",ch);
    printf("\n octal : %o",ch);

    getch();
    return 0;
}
