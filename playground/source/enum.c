#include <stdio.h>

typedef enum {
	false,
	true
	} BOOLEAN;

int main() {
	BOOLEAN b_var;
	b_var = false;
	if(b_var == true)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE \n");
	}

	return (0);
}
