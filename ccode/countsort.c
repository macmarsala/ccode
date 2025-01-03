#include <stdio.h>

void printarray(int A[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", A[i]);
	
	printf("\n");
}



int main()
{
	int counters[10] = {};
	int x;

	while (1)
	{
		scanf("%d", &x);
		if (x == 10) break;
		if (x < 0 || x > 9) continue;
		counters[x]++;
	}

	for (x = 0; x < 10; x++)
		for (int i = 0; i < counters[x]; i++)
			printf("%d ", x);

	printf("\n");

	return 0;
}
