#include <stdio.h>
#include <stdbool.h>

bool has_TA_in(char string[]);

int main() {
	char name[20];
	printf("Enter your name : ");
	scanf("%s", &name);
	if (has_TA_in(name))
		printf("Your are cute >///<");
	else
		printf("Not cute ._.");
}

bool has_TA_in(char string[]) {
	int i = 0;
	while(i != 20 && string[i] != '\0') i++;
	return ((string[0] == 'T' || string[0] == 't') && (string[i - 1] == 'A' || string[i - 1] == 'a'));
}