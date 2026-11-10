#include <stdio.h>
#include <stdlib.h>

int main()
   //If else if
{
    int n; //n is the number of students
    printf("Enter the number of students: ");
    scanf("%d" , &n);

    for (int a=1; a<=n; a++) {
            char name[50];
            char grade;
            int registrationnumber;
            int marks;

            printf("\n===This is student number %d===\n", a);
            printf("Registration number: ");
            scanf(" %d", &registrationnumber);
            printf("Name: ");
            scanf(" %49[^\n]", name);

    do {
            printf("Marks (0-100): ");
            scanf(" %d", &marks);
        } while (marks < 0 || marks > 100);

        //Student's grade
        if (marks >= 70)
         grade = 'A';
        else if (marks >= 60)
         grade = 'B';
        else if (marks >= 50)
              grade = 'C';
        else if (marks >= 40)
         grade = 'D';
        else
             grade = 'F';


        printf("\n----------------------------------\n");
        printf("        STUDENT INFORMATION\n");
        printf("----------------------------------\n");
        printf("Registration Number: %d\n", registrationnumber);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if (marks >= 40)
            printf("Status: PASSED\n");
        else
            printf("Status: FAILED\n");
        printf("----------------------------------\n");
    }

    return 0;
}
