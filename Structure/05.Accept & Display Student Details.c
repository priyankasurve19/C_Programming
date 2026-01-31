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
   struct Student S = {};

    printf("\n Enter Student Details =>");

    printf("\n Enter Student Roll_No:");
    scanf("%d",&S.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    scanf("%s",&S.Name);

    printf("\n Enter Student Marks:");
    scanf("%f",&S.Marks);

    system("cls");
    printf("\n Display Student Detail =>\n");

    printf("\n Student Information =>");
    printf("\n Student Roll_No=%d",S.Roll_No);
    printf("\n Student Name=%s",S.Name);
    printf("\n Student Marks=%0.2f",S.Marks);

    getch();
    return 0;
}

