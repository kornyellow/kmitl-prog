#include <stdio.h>

int main() {
	int celcius;
	int kevin;
	float farenheit;
	printf("Enter the temperature in C : ");
	scanf("%d", &celcius);

	farenheit = ((celcius / (float)5) * 9) + 32;
	kevin = celcius + 273;

	printf("Temperture in C = %d\n", celcius);
	printf("Temperture in F = %.2f\n", farenheit);
	printf("Temperture in K = %d\n", kevin);
	return 0;
}