//6. Write a program to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of first %d is %d",n,fact);
}