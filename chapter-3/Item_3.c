#include <stdio.h>

int main() {

	int degree_romer;

	printf("Enter temperature in degree Romer : ");
	scanf("%d", &degree_romer);

	printf("Temparature in degree Celcius : %.2f\n", degree_romer * 1.25);

	return 0;
}