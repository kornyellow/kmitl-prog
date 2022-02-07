#include <stdio.h>

int main() {

	int a, b, c, min, mid, max;

	printf(" *** Find (Minimum + Maximum) / Middle ***\n");
	printf("Enter 3 integers : ");
	scanf("%d %d %d", &a, &b, &c);

	if(((a<b)&&(b<c)) || ((a>b)&&(a<c))) { min = a; mid = b; max = c; }
	if(((b<a)&&(a>c)) || ((a>b)&&(a<c))) { min = c; mid = a; max = b; }
	if(((c<a)&&(c>b)) || ((c>a)&&(c<b))) { min = b; mid = c; max = a; }

	float result = (min + max) / (float) mid;
	printf("(Min + Max) / Mid = (%d + %d) / %d = %.4f\n", min, max, mid, result);

	return 0;
}