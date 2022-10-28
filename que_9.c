//9. Write a program to calculate LCM of two numbers
int main()
{
   		 int X, Y, L;
    		printf("Enter Two Numbers:\n");
    		scanf("%d%d",&X ,&Y );
    		for(L=X>Y?X:Y;L<=X*Y;L++)
    		if(L%X==0 && L%Y==0)
    		break;
    		printf("LCM is %d", L);
    		return 0;
}
