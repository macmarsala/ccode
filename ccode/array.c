#include <stdio.h>

#define N 7

void printarr(int A[])
{
	for (int i = 0; i < N; i++)
		printf("%3d", A[i]);
	printf("\n");
}

int main()
{
	int A[N] = {};

	for (int i = 0; i < N; i++)
		A[i] = i * i;

	for (int i = 0; 2 * i < N - 1; i++)
	{
		printarr(A);
		A[N - 1 - i] ^= A[i];
		printarr(A);
		A[i] ^= A[N - 1 - i];
		printarr(A);
		A[N - 1 - i] ^= A[i];
		printarr(A);
	}

	return 0;
}
