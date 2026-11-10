#include <stdio.h>
#include <stdlib.h>

int main()
    //Switch Case
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

        switch (marks){
     case 1 (marks >=70):
        printf("Grade = A");
        break;

     case 2 (marks >=60):
        printf("Grade = B");
        break;

     case 3 (marks >=50):
        printf("Grade = C");
        break;

     case 4 (marks >=40):
        printf("Grade = D");
        break;

     default:
        printf ("Failed");
        }

    }
    return 0;
}
