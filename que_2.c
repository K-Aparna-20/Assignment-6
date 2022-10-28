//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+2*i;  
    }
    printf("sum of first %d even natural number is %d",n,sum);
}