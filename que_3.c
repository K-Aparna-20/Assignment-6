//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+2*i-1;  
    }
    printf("sum of first %d odd natural number is %d",n,sum);
}