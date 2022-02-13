#include <stdio.h>

int main() {

	int number;
	printf("Enter a positive number : ");
	scanf("%d", &number);

	if(number > 0) {
		for(int i = 0; i < number; i++) {
			for(int j = 0; j <= i; j++)
				printf("%d", i + 1);
			printf("\n");
		}
	} else printf("Cannot display data : %d", number);

	return 0;
}