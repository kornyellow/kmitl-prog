#include <stdio.h>

int main() {

	char word[100];
	printf(" *** Get input from keyboard as string ***\n");
	printf("Please input a string : ");
	scanf("%[^\n]", word);

	printf("string : %s\n", word);
	printf("string : %0.7s\n", word);
	printf("string : %0.15s\n", word);
	return 0;
}