#include <stdio.h>

int main() {

	int integer;

	printf(" *** Show a number in variety formats. ***\n");
	printf("Enter integer : ");
	scanf("%d", &integer);

	printf("Char\t-> %c\n", integer);
	printf("Float\t-> %.2f\n", integer * 1.0);
	printf("Int*2.5\t-> %.4f\n", integer * 2.5);

	return 0;
}