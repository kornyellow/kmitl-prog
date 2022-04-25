#include <stdio.h>

int main() {
	int hour;
	int minute;
	printf("Input two numbers : ");
	scanf("%d %d", &hour, &minute);
	if (hour <= 23 && minute <= 59) {
		for (int i = 0; i < (hour * 60) + minute; i++)
			printf("*");
	} else {
		printf("It's cannot calculation\n");
	}

	return 0;
}