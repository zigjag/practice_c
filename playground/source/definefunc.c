#include <stdio.h>
#define ADD(a, b) (a+b)
int main() {
	printf("The sum of %d and %d is %d\n", 5, 2, ADD(5, 2));
	printf("The sum of %d and %d is %d\n", 3, 7, ADD(3, 7));

	return (0);
}
