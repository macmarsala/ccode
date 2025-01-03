#include <stdio.h>

#define ALLOCATEDMEMORY 100

int fillarray(int A[], int maxsize)
{
	int top = 0;

	while (1)
	{
		int x;
		scanf("%d", &x);
		if (x == 0 || top == maxsize) break;
	       	A[top] = x;
		top++;
	}

	return top;
}

void insertsort(int A[], int maxsize)
{
	for (int i = 1; i < maxsize; i++)
	{
		for (int k = i; k > 0 && A[k - 1] > A[k]; k--)
		{	
			// A[k] ^= A[k - 1];		
			// A[k - 1] ^= A[k];
			// A[k] ^= A[k - 1];		

			int temp = A[k];
			A[k] = A[k - 1];
			A[k - 1] = temp;
		}	
	}
}

void printarray(int A[], int maxsize)
{
	printf("%d ", A[0]);
	for(int i = 1; i < maxsize; i++)
		printf("%d ", A[i]);
	printf("\n");
}


int main()
{
	printf("Enter array: ");

	int A[ALLOCATEDMEMORY];
	int N = fillarray(A, ALLOCATEDMEMORY);
	
	insertsort(A, N);
	printarray(A, N);

	return 0;
}
