#include <stdio.h>

int main() {

	char input;
	printf("what color do you like.\n");
	printf("Red\nBlue\nGreen\nYellow\nPurple\nWhite\n");
	printf("Select R B G Y P W : ");
	scanf("%c", &input);

	if(input == 'R') printf("You like Red");
	else if(input == 'B') printf("You like Blue");
	else if(input == 'G') printf("You like Green");
	else if(input == 'Y') printf("You like Yellow");
	else if(input == 'P') printf("You like Purple");
	else if(input == 'W') printf("You like White");
	else printf("NO color in range");
	printf("\n");

	return 0;
}