#include <stdio.h>

void swap_jutsu(int* wallet_1, int* wallet_2);

int main() {
	int my_wallet, friend_wallet;
	printf("Enter my money, friend money : ");
	scanf("%d %d", &my_wallet, &friend_wallet);
	printf("Me : %4d | Friend : %4d", my_wallet, friend_wallet);
	swap_jutsu(&my_wallet, &friend_wallet);
	printf("\n\n====== Booooom! ======\n\n");
	printf("Me : %4d | Friend : %4d", my_wallet, friend_wallet);
}

void swap_jutsu(int* wallet_1, int* wallet_2) {
	int temp = *wallet_1;
	*wallet_1 = *wallet_2;
	*wallet_2 = temp;
}