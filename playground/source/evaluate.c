#include <stdio.h>

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	if(x == 10) printf("%d is equal to 10\n", x);
	else if(x > 10) printf("%d is greater than 10\n", x);
	else if(x < 10) printf("%d is less than 10\n", x);
	else puts("Invalid input. Try again\n");
}

