#include <stdio.h>

void add_money_to_wallet(int* wallet, int income);

int main() {
	int wallet = 20, income;
	printf("Enter money : ");
	scanf("%d", &income);
	add_money_to_wallet(&wallet, income);
	printf("My wallet -> %d", wallet);
}

void add_money_to_wallet(int* wallet, int income) {
	*wallet += income;
}