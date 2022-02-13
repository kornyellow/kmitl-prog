#include <stdio.h>

int main() {

	char name[100];
	printf("Enter your name : ");
	scanf("%s", &name);

	int at = 0;
	while(name[at] != '\0')
		printf("%c\n", name[at++] - 32);
	printf("Name length : %d", at);

	return 0;
}