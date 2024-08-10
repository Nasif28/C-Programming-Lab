// Write a program that finds a summation of 1 to N numbers (1+2+3+4+5+....+N).
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,n;

    printf("Enter the last number of Series = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("1+2+3+....+%d = %d",n,sum);

    return 0;
}

