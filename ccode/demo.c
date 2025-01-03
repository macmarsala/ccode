#include <stdio.h>

int main()
{
	printf("Hello! What's your name? ");
	char name[20];
	scanf("%s", name);
	printf("Wonderful name, %s! And how old are you? ", name);
	int age;
	scanf("%d", &age);
	printf("I thought you're a little younger! About %d. \nGoodbye!\n", age - 3);
	return 0;
}
