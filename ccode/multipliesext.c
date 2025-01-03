#include <stdio.h>

int getmultipliesnum(long long int x, int A[])
{
	long long int divisor = 2;
	int top = 0;

	while (x != 1)	
	{
		if(x % divisor == 0)
		{
			A[top] = divisor;
			top++;
			x /= divisor;
		}
		else
			divisor++;
	}

	return top;
}

int main()
{	
	long long int x;
	scanf("%lld", &x);

	int A[65];
	int N = getmultipliesnum(x, A);
	
	if (N <= 1)
		printf("Number %lld is prime.", x);
	else
	{
		printf("Multiplies of number %lld: \n", x);

		for (int i = 0; i < N; i++)
			printf("%d ", A[i]);
	}
	
	printf("\n");

	return 0;
}
