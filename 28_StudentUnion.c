//A C Program to store information of a student using union.          © Ishav Verma 20/March/2021
#include <stdio.h>
#include <string.h>

union student 
{
            char name[20];
            char subject[20];
            float percentage;
};

int main() 
{
    union student record1;
    union student record2;

    // assigning values to record1 union variable
       record1.percentage = 80.50;

       printf("Union record1 values example\n");
       strcpy(record1.name, "Rajesh");
       printf(" Name       : %s \n", record1.name);

       strcpy(record1.subject, "Maths");
       printf(" Subject    : %s \n", record1.subject);

       record1.percentage = 80.50;
       printf(" Percentage : %f \n\n", record1.percentage);

    // assigning values to record2 union variable
       printf("Union record2 values example\n");
       strcpy(record2.name, "Manav");
       printf(" Name       : %s \n", record2.name);

       strcpy(record2.subject, "Physics");
       printf(" Subject    : %s \n", record2.subject);

       record2.percentage = 99.50;
       printf(" Percentage : %f \n", record2.percentage);
       return 0;
} 