#include <stdio.h>

int main() {
	int num[8][10] = {
		2, 3, 5, 7, 11, 13, 17, 19, 29, 31,
		37, 41, 43, 37, 61, 71, 73, 79, 83, 97,
		103, 107, 109, 113, 131, 151, 181, 191, 193, 173,
		163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
		212, 224, 236, 248, 313, 326, 339, 341, 355, 368,
		2, 4, 6, 6, 10, 12, 14, 16, 18, 20,
		1, 3, 5, 7, 9, 11, 13, 17, 19, 21,
		163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
	};

	printf(" *** Find a value in array 2 dimension ***\n");
	printf("Enter a value : ");
	int target;
	scanf("%d", &target);

	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 10; col++) {
			printf("%5d", num[row][col]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Finding value => %d\n", target);

	int order = 1;
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 10; col++) {
			if (num[row][col] == target) {
				printf("%d. (row,column) => (%d,%d)\n", order, row + 1, col + 1);
				order ++;
			}
		}
	}
	if (order == 1) {
		printf(" --- !!! NOT FOUND !!! ---\n");
	}
	return 0;
}