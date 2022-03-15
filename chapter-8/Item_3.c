#include <stdio.h>

int main() {
	int number;
	printf("Enter positive number : ");
	scanf("%d", &number);

	if (number > 0) {
		int maxWidth = 1;
		int widthCheck = number;
		while (1) {
			widthCheck -= maxWidth;
			if (widthCheck <= 0) {
				if (widthCheck < 0) maxWidth --;
				break;
			}
			maxWidth ++;
		}

		int maxLeftWidth, maxRightWidth;
		if (maxWidth % 2 == 0) {
			maxLeftWidth = maxWidth;
			maxRightWidth = maxWidth - 1;
		} else {
			maxLeftWidth = maxWidth - 1;
			maxRightWidth = maxWidth;
		}

		int row = 1, col = 0;
		int numberLeft = number;
		int maxLength;

		char alpha = 'A';
		while (1) {
			numberLeft -= row;
			if(numberLeft >= 0) {
				maxLength = row;
			} else maxLength = row + numberLeft;

			if (row % 2 == 1) {
				for (int i = 0; i < maxLeftWidth - 1; i++) printf(".");
			} else {
				for (int i = 0; i < maxLeftWidth - row; i++) printf(".");
				if (numberLeft <= 0) for (int i = 0; i < maxLeftWidth - maxLength; i++) printf(".");
			}

			while (col <= row - 1) {
				int toPrint;
				if (row % 2 == 0) toPrint = (maxLength - col - 1);
				else toPrint = col;
				printf("%c", (((alpha - 'A') + toPrint) % 26) + 'A');

				col ++;
				number --;
				if (number == 0) break;
			}

			if (row % 2 == 1) {
				for (int i = 0; i < maxRightWidth - row; i++) printf(".");
				if (numberLeft <= 0) for (int i = 0; i < maxRightWidth - maxLength; i++) printf(".");
			} else {
				for (int i = 0; i < maxRightWidth - 1; i++) printf(".");
			}

			alpha = (((alpha - 'A') + maxLength) % 26) + 'A';
			col = 0;
			row ++;
			printf("\n");

			if (number == 0) break;
		}
	}
	else printf("Out of range --> %d\n", number);

	return 0;
}