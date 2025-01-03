#include <stdio.h>

void printmultiplies(long long int x)
{
	long long int divisor = 2;
	
	while(x != 1)	
	{
		if(x % divisor == 0)
		{
			printf("%lld\n", divisor);
			x /= divisor;
		}
		else
			divisor++;
	}
	
	printf("\n");	
}

int main()
{	
	long long int x;
	scanf("%lld", &x);
	printf("Multiplies of number %lld: \n", x);
	printmultiplies(x);
		
	return 0;
}
