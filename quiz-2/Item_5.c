#include <stdio.h>

int main() {
	char input[100];
	printf(" *** ASCII string display ***\n");
	printf("Enter a string : ");
	scanf("%[^\n]", input);
	printf("Output : ");

	int eol = 0;
	while (input[++eol] != '\0');

	printf("[");
	for (int i = eol - 2; i >= 0; i--) {
		printf("|%d %c %x|", input[i], input[i], input[i]);
		if (i != 0) printf(",");
	}
	printf("]");
	return 0;
}