// A program that display the pyramid if input N = 4567
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number = ");
    scanf("%d",&n);

    while(n!=0)
    {
        printf("%d \n",n);
        n/=10;
    }


    getch();
}

