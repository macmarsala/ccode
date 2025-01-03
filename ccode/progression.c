#include <stdio.h>

int main()
{
	int start, stop, step;
	scanf("%d%d%d", &start, &stop, &step);
	while((step > 0) ? (start <= stop) : (start >= stop))
	{
		printf("%d\n", start);
		start += step;
	}	
	return 0;
}
