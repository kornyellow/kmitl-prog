#include <stdio.h>

int main() {
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	for (int i = 7; i < number; i += 7)
		printf("%d\t", i);

	return 0;
}