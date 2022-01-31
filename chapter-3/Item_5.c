#include <stdio.h>

int main() {

	unsigned long long_integer;
	printf(" *** Display integer in different styles ***\n");
	printf("Enter an integer : ");
	scanf("%ld", &long_integer);

	printf("Your number : %ld\n", long_integer);
	printf("variable size = %d bytes \n", sizeof(long_integer));

	int three_digits_1 = long_integer % 1000;
	int three_digits_2 = (long_integer / 1000) % 1000;
	int three_digits_3 = (long_integer / 1000000) % 1000;
	int three_digits_4 = (long_integer / 1000000000) % 1000;

	printf("last 3 digits : %d\n", three_digits_1);
	printf("next 3 digits : %d\n", three_digits_2);
	printf("next 3 digits : %d\n", three_digits_3);
	printf("next 3 digits :   %d\n", three_digits_4);
	printf("comma format  : %d,%d,%d,%d\n", three_digits_4, three_digits_3, three_digits_2, three_digits_1);


	return 0;
}