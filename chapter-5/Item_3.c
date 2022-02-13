#include <stdio.h>

int main() {

	char str[100];
	printf(" *** To Lower Case ***\n");
	printf("Enter a string : ");
	scanf("%[^\n]s", &str);

	printf("Output : ");
	int at = 0;
	while(str[at] != '\0') {

		if(str[at] >= 'A' && str[at] <= 'Z') str[at] += 32;
		printf("%c", str[at++]);
	}
	printf("\n");

	return 0;
}