#include <stdio.h>

#define n 15

int main() 
{
	int A[n] = {};

	// for (int i = 0; i < n; i++) 
	// 	A[i] = (i % 2 == 0) ? i + 3 : i * 2;
	
	for (int i = 0; i < n; i++) 
		A[i] = (i % 2 == 0) ? (i / 2) : ((n % 2 == 0) ? (n / 2) : (n / 2 + 1)) + (i / 2);

	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);

	return 0;
}
