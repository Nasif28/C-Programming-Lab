// Write a program that read two number (x,y) and displays the sum (x+y) of those numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,sum;

    printf("Enter two Number = ");
    scanf("%d %d",&x,&y);

    sum = x + y;

    printf("%d + %d = %d",x,y,sum);

    return 0;
}

