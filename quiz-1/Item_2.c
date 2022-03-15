#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	float c;
	printf("Enter input : ");
	scanf("%d", &a);
	scanf("%d", &b);

	c = sqrt((a*a) + (b*b));
	printf("%.2f\n", c);
	return 0;
}