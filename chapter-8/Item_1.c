#include <stdio.h>

int main() {
	printf(" *** Ascending sort ***\n");
	printf("Enter 10 whole numbers : ");

	int wholeNumber[10];
	for (int i = 0; i < 10; i++) scanf("%d", &wholeNumber[i]);

	int flagPtr = 0;
	int scanPtr = 0;
	int lowest;
	while (flagPtr != 10) {
		while (scanPtr != 10) {
			if (wholeNumber[scanPtr] < wholeNumber[flagPtr]) {
				int tempNumber = wholeNumber[flagPtr];
				wholeNumber[flagPtr] = wholeNumber[scanPtr];
				wholeNumber[scanPtr] = tempNumber;
			}
			scanPtr ++;
		}
		flagPtr ++;
		scanPtr = flagPtr;
	}

	printf("Output :");
	for (int i = 0; i < 10; i++) printf(" %d", wholeNumber[i]);
	printf("\n");

	return 0;
}