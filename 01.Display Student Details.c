#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    int Roll_No;
    char Name[20];
    float Marks;
  };
    int main()
    {
    struct Student S;

    S.Roll_No=15;
    strcpy(S.Name,"Priyanka");
    S.Marks = 84.60;

    printf("\n Display Student Details =>");

    printf("\n Student Roll_No = %d",S.Roll_No);
    printf("\n Student Name = %s",S.Name);
    printf("\n Student Marks = %0.2f",S.Marks);

    getch();
    return 0;
 }
