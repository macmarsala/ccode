#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return 1;
	return factorial(n - 1) * n;
}

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);

}

double fastpow(double a, int n)
{
	if (n == 0) return 1;
	if (n % 2 == 1) return a * fastpow(a, n - 1);
	return fastpow (a * a, n / 2);
}

int fib(int n)
{
	if (n <= 1) return n;
	return fib(n - 1) + fib (n - 2);
}

int main() 
{
	printf("welcome to recursion samples! enter num: ");

	int x, y;
	scanf("%d", &x);

	printf("factorial(%d) is %d\n", x, factorial(x));	
	printf("enter another num, pls: ");
	scanf("%d", &y);
	printf("gcd(%d, %d) is %d\n", x, y, gcd(x, y));
	printf("power(%d, %d) is %lf\n", x, y, fastpow(x, y));
	printf("fib(%d) is %d\n", x, fib(x));	

	return 0;
}

