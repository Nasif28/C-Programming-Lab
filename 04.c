// Write a program that read two number (x,y) and displays the division (x/y) of those numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,division;

    printf("Enter two Number = ");
    scanf("%d %d",&x,&y);

    division = x / y;

    printf("%d / %d = %d",x,y,division);

    return 0;
}

