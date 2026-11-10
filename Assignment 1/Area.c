#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable Declaration
    double area;
    const double Pi = 3.142;
    double r;

    //Capture Input
    printf("Please provide radius of your sphere:");
    scanf("%lf" , &r);
    area =Pi * r * r * 4;
    printf("Area of the Sphere=%f\n", area);
    return 0;
}
