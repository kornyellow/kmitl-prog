#include <stdio.h>

int main() {
	int number;
	printf("Enter : ");
	scanf("%d", &number);

	char start = 'A';
	for (int y = 0; y < number; y++) {
		int anchor = y;
		for (int x = 0; x < number; x++) {
			printf("%c", start + anchor);
			anchor = (anchor + 1) % number;
		}
		printf("\n");
	}

	return 0;
}