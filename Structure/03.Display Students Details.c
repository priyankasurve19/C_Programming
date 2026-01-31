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
   struct Student S1,S2,S3;

    S1.Roll_No = 17;
    strcpy(S1.Name,"Savi");
    S1.Marks = 90.50;

    S2.Roll_No = 15;
    strcpy(S2.Name,"Sai");
    S2.Marks = 80.50;

    S3.Roll_No = 18;
    strcpy(S3.Name,"Sanvi");
    S3.Marks = 90.00;

    printf("\n Display Students Details =>");

    printf("\n\n Enter 1st Student Information =>");
    printf("\n Student Roll_No= %d",S1.Roll_No);
    printf("\n Student Name = %s",S1.Name);
    printf("\n Student Marks  = %0.2f",S1.Marks);

    printf("\n\n Enter 2nd Student Information =>");
    printf("\n Student Roll_No= %d",S2.Roll_No);
    printf("\n Student Name = %s",S2.Name);
    printf("\n Student Marks  = %0.2f",S2.Marks);

    printf("\n\n Enter 3rd Student Information =>");
    printf("\n Student Roll_No= %d",S3.Roll_No);
    printf("\n Student Name = %s",S3.Name);
    printf("\n Student Marks  = %0.2f",S3.Marks);

    getch();
    return 0;
}

