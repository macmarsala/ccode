#include <stdio.h>

int foo(int *p)
{
	printf("got p, p = %d\n", *p);
	*p = 100;
	printf("return p, p = %d\n", *p);
}

int main()
{
	int x = 10;
	
	printf("x = %d\n", x);
	
	foo(&x);
	
	printf("x = %d\n", x);

	return 0;
}
