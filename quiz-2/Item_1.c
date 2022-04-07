#include <stdio.h>

int main() {
	float width, height;
	printf("Enter width and height : ");
	scanf("%f %f", &width, &height);
	printf("Area is %.2f\n", (width * height) / 2);
	if ((width * height) / 2 > 100) printf("Area over 100 units.\n");
	return 0;
}