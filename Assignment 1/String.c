#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    int length = 0;

    printf("Enter your name: ");
    scanf("%99s", name);

    printf("You entered: %s\n", name);

    while (name[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}



