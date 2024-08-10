// A program that finds the Factorial of N (1*2*3*4*......*N).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m=1;

    printf("Enter the value of N = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        m = m * i;
    }
    printf("Factorial of N = %d",m);


    getch();
}

