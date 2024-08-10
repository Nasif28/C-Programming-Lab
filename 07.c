// Write a program to find the area (pi r^2) and circumference (2 pi r) of a circle.
#include<stdio.h>
#include<conio.h>
int main()
{
    double pi=3.1416,r,area,circumference;

    printf("Enter Value of r = ");
    scanf("%lf",&r);

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("The Area is = %.2lf\n",area);
    printf("The circumference is = %.2lf",circumference);


    return 0;
}
