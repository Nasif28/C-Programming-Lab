// Write a program that finds the result of the expression (a^2+2ab+b^2)/(a+b).
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;

    printf("Enter Value of a and b = ");
    scanf("%d %d",&a,&b);

    result = (a*a+2*a*b+b*b)/(a+b);

    printf("(%d^2+2*%d*%d+%d^2)/(%d+%d) = %d",a,a,b,b,a,b,result);


    return 0;
}



