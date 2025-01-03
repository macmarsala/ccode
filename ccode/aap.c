#include <stdio.h>

int main()
{
	int i = 10;
	int *pi = &i;

	printf("%d\n", i);
	printf("%d\n", pi);

	*pi = 999;

	printf("%d\n", i);

	return 0;
}
