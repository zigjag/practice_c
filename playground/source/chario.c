#include <stdio.h>

int main() {
	int c;
	printf("Type a letter: ");
	c = getchar();
	printf("You typed ");
	putchar(c);
	putchar('\n');

	return (0);
}
