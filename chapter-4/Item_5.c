#include <stdio.h>

int main()
{
	char lottery[6];
	int money = 0;
	printf(" *** Lottery ***\n");
	printf("Ticket Number : ");
	scanf("%s", &lottery);

	if((lottery[0] == '3' && lottery[1] == '6' && lottery[2] == '7') || (lottery[0] == '6' && lottery[1] == '5' && lottery[2] == '3')) {
		printf("You Won! [The first three digits]\n");
		money += 4000;
	}
	if((lottery[3] == '5' && lottery[4] == '6' && lottery[5] == '6') || (lottery[3] == '8' && lottery[4] == '7' && lottery[5] == '8')) {
		printf("You Won! [The last three digits]\n");
		money += 4000;
	}
	if(lottery[4] == '1' && lottery[5] == '5' ) {
		printf("You Won! [The last two digits]\n");
		money += 2000;
	}

	if(money == 0) printf("Sorry, you didn't win this time.\n");
	else printf("You get %d Baht.\n",money);

	return 0;
}