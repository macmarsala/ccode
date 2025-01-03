#include <stdio.h>
#include <time.h>

long long int cache[100] = {};

long long int fib(int n)
{
	if (n <= 1) return n;
	if (cache[n] == 0) 
		cache[n] = fib(n - 1) + fib(n - 2);
	return cache[n];
}

int main() 
{
	for (int i = 0; i < 80; i++)
	{
		clock_t timestart = clock();
		long long int result = fib(i);
		clock_t timeend = clock();

		printf("fib(%2d) = %lld \ttime = %d\n", i, result, (timeend - timestart) * 1000 / CLOCKS_PER_SEC);
		
	}

	return 0;
}
