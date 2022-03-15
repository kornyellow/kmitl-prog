#include <stdio.h>

int main() {
	int a, b, c;
	float average;
	printf("Enter 3 Numbers  : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	a = a * -1;
	b = b * -1;
	c = c * -1;
	average = (a + b + c) / (float)3;

	printf("Opposite Numbers : %d %d %d\n", a, b, c);
	printf("Opposite Average = %.2f\n", average);
	return 0;
}