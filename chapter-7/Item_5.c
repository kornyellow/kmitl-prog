#include <stdio.h>

void print_id_card(char name[], char color[], char food[]);
int count_length(char string[]);

int main() {
	char name[19], color[11], food[11];
	printf("Enter name, color, food : ");
	scanf("%s %s %s", &name, &color, &food);
	print_id_card(name, color, food);
}

void print_id_card(char name[], char color[], char food[]) {
	printf("======================\n");

	printf("| %s", name);
	for(int i = 0; i < 18 - count_length(name); i++) printf(" ");
	printf(" |\n");

	printf("| ------------------ |\n");

	printf("| Color : %s", color);
	for(int i = 0; i < 10 - count_length(color); i++) printf(" ");
	printf(" |\n");

	printf("| Food  : %s", food);
	for(int i = 0; i < 10 - count_length(food); i++) printf(" ");
	printf(" |\n");

	printf("======================\n");
}

int count_length(char string[]) {
	int n = 0;
	while(string[++n] != '\0');
	return n;
}