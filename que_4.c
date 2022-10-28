//4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }    
    printf("sum of square of first %d is %d",n,sum);
    return 0;
    
}