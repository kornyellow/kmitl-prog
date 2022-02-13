#include <stdio.h>

int main() {

	int number;

	printf(" *** Find Factorial ***\n");
	printf("Enter a number less than 100 : ");
	scanf("%d", &number);

	printf("Factorial of %d = ", number);

	unsigned long factorial = 1;
	for(int i = factorial; i <= number; i++) {

		if(i != number) printf("%d x ", i);
		else printf("%d", i);

		factorial *= i;
	}
	printf(" = ");

	char numbers[100];
	int remainder, digit = 0;
	while(factorial != 0) {

		remainder = factorial % 10;
		factorial /= 10;
		numbers[digit] = remainder + '0';
		digit++;
	}

	for(int i = digit - 1; i >= 0; i--) {

		printf("%c", numbers[i]);
		if(i % 3 == 0 && i != 0) printf(",");
	}
	printf("\n");

	return 0;
}