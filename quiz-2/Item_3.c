#include <stdio.h>

int main() {
	int input;
	printf("input : ");
	scanf("%d", &input);
	printf("\n");

	for (int i = 0; i < input; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j + 1);
		}
		printf("\n");
	}

	return 0;
}