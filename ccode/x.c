#include <stdio.h>

int main()
{
	int x, y, z;
	x = (y = 3) + (z = 2);
	printf("%d", x);
	return 0;
}
