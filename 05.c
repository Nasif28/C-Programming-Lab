// Write a program that read two number (x,y) and finds Quotient (x/y) and Remainder (x%y).
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,quotient,remainder;

    printf("Enter two Number = ");
    scanf("%d %d",&x,&y);

    quotient = x / y;
    remainder = x % y;

    printf("%d / %d = %d\n",x,y,quotient);
    printf("%d %% %d = %d\n",x,y,remainder);

    return 0;
}


