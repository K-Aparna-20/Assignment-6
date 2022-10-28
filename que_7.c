//7. Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("number of digits is %d",count);
}