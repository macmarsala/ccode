#include <stdio.h>

int main()
{
	int x, y;
	x = 123;
	y = 412;
	printf("x = %d, y = %d\n", x, y);
	x = x ^ y;
	y = y ^ x;
	x = x ^ y;
	printf("x = %d, y = %d\n", x, y);
	return 0;	
}
