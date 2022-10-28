//10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
  		int n=786, r = 0;
  		while (n != 0)
  		{
    			r = r * 10;
    			r = r + n%10;
    			n = n/10;
  		}
 	 	printf("Reverse of the number = %d\n", r);
 	 	return 0;
}
