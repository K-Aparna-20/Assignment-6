//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }    
    printf("sum of cube of first %d is %d",n,sum);
    return 0;
    
}