// Write a program that reads a number N and checks the number is odd or even.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;

    printf("Enter a Number = ");
    scanf("%d",&n);

    if(n%2==0)
        printf("The Number is Even");

    else
        printf("The Number is Odd");


    return 0;
}

