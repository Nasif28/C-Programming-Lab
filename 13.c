// Write a program that reads N numbers and displays the Average of those numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,average;

    printf("Enter four number = ");
    scanf("%f %f %f %f",&a,&b,&c,&d);

    average = (a+b+c+d) / 4;

    printf("The Average Number is = %.2f",average);



    return 0;
}
