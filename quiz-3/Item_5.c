#include <stdio.h>

int main() {
	char number[9];
	printf(" *** Summation of each digit ***\n");
	printf("Enter a positive number : ");
	scanf("%s", &number);
	printf("\n");

	int sum = 0;
	int eol = 0;
	while (number[eol] != '\0')
		sum += number[eol++] - 48;
	printf("Summation of each digit = %d\n", sum);

	return 0;
}