#include <stdio.h>

int main() {

	char alphabet;

	printf("Enter 1 alphabet : ");
	scanf("%c", &alphabet);

	printf("The ascii of \'%c\' is %d\n", alphabet, alphabet);

	return 0;
}