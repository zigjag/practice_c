#include <stdio.h>
#include <string.h>

int main() {
	char string1[64];
	char string2[64];
	char buffer[128];

	printf("Type first string here: ");
	fgets(string1, 64, stdin);
	printf("Type second string here: ");
	fgets(string2, 64, stdin);
	
	strcpy(buffer, string1);
	strcat(buffer, string2);

	puts(buffer);

	return (0);
}
