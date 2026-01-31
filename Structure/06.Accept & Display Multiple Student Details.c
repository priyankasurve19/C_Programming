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
   struct Student S1 = {},S2 = {},S3 = {}, S4 = {},S5 = {};


    printf("\n\n Enter 1st Student Details =>");

    printf("\n Enter Student Roll_No:");
    scanf("%d",&S1.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    scanf("%s",&S1.Name);

    printf("\n Enter Student Marks:");
    scanf("%f",&S1.Marks);

    printf("\n\n Enter 2nd Student Details =>");

    printf("\n Enter Student Roll_No:");
    scanf("%d",&S2.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    scanf("%s",&S2.Name);

    printf("\n Enter Student Marks:");
    scanf("%f",&S2.Marks);

    printf("\n\n Enter 3rd Student Details =>");

    printf("\n Enter Student Roll_No:");
    scanf("%d",&S3.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    scanf("%s",&S3.Name);

    printf("\n Enter Student Marks:");
    scanf("%f",&S3.Marks);

    printf("\n\n Enter 4th Student Details =>");

    printf("\n Enter Student Roll_No:");
    scanf("%d",&S4.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    scanf("%s",&S4.Name);

    printf("\n Enter Student Marks:");
    scanf("%f",&S4.Marks);

    printf("\n\n Enter 5th Student Details =>");

    printf("\n Enter Student Roll_No:");
    scanf("%d",&S5.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    scanf("%s",&S5.Name);

    printf("\n Enter Student Marks:");
    scanf("%f",&S5.Marks);

    system("cls");
    printf("\n\n Display Students Detail =>\n");

    printf("\n\n Display 1st Student Information =>");
    printf("\n Student Roll_No=%d",S1.Roll_No);
    printf("\n Student Name=%s",S1.Name);
    printf("\n Student Marks=%0.2f",S1.Marks);

    printf("\n\n Display 2nd Student Information =>");
    printf("\n Student Roll_No=%d",S2.Roll_No);
    printf("\n Student Name=%s",S2.Name);
    printf("\n Student Marks=%0.2f",S2.Marks);

    printf("\n\n Display 3rd Student Information =>");
    printf("\n Student Roll_No=%d",S3.Roll_No);
    printf("\n Student Name=%s",S3.Name);
    printf("\n Student Marks=%0.2f",S3.Marks);

    printf("\n\n Display 4th Student Information =>");
    printf("\n Student Roll_No=%d",S4.Roll_No);
    printf("\n Student Name=%s",S4.Name);
    printf("\n Student Marks=%0.2f",S4.Marks);

    printf("\n\n Display 5th Student Information =>");
    printf("\n Student Roll_No=%d",S5.Roll_No);
    printf("\n Student Name=%s",S5.Name);
    printf("\n Student Marks=%0.2f",S5.Marks);

    getch();
    return 0;
}

