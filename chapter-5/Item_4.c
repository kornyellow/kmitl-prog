#include <stdio.h>

int main() {

	int number;
	printf("Enter a number : ");
	scanf("%d", &number);

	for(int i = 0; i < number; i++) {
		for(int j = 0; j < number; j++)
			printf("%c", 'z' - i - j);
		printf("\n");
	}

	return 0;
}