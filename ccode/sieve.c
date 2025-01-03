#include <stdio.h>

#define N 100

int main()
{
	int sieve[N] = {};

	for (int i = 2; i * i < N; i++)
		if (sieve[i] == 0)
			for (int j = i * i; j < N; j += i) 
				sieve[j] = 1;

	for (int i = 0; i < N; i++)
	{
		printf("%3d", i);
		printf("%3d \n", sieve[i]);
	}
	
	return 0;
}
