#include <stdio.h>

int main() {

	int a, b;
	printf(" *** Max-Min ***\n");
	printf("Enter 2 numbers : ");
	scanf("%d %d", &a, &b);

	printf("Max - Min = ");
	if(a > b) printf("%d - %d = %d", a, b, a - b);
	else printf("%d - %d = %d", b, a, b - a);
	printf("\n");

	return 0;
}