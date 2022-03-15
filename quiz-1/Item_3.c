#include <stdio.h>

 char main() {
	char a, b, c;
	printf("Input 3 characters : ");
	scanf(" %c", &a);
	scanf(" %c", &b);
	scanf(" %c", &c);

	printf("Result : %c %c %c\n", a + 3, b + 3, c + 3);
	return 0;


}