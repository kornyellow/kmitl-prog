#include <stdio.h>

int main() {

	int a, b, c, min, max, mid;
	printf(" *** Check for right triangle ***\n");
	printf("Enter 3 sides of triangle : ");
	scanf("%d %d %d", &a, &b, &c);

	if(((a<b)&&(b<c)) || ((a>b)&&(a<c))) { min = a; mid = b; max = c; }
	if(((b<a)&&(a>c)) || ((a>b)&&(a<c))) { min = c; mid = a; max = b; }
	if(((c<a)&&(c>b)) || ((c>a)&&(c<b))) { min = b; mid = c; max = a; }

	if (a == 0 || b == 0 || c == 0 || max > mid + min) printf("%d, %d and %d are NOT sides of triangle.\n", a, b, c);
	else if (max * max == (mid * mid) + (min * min)) printf("%d, %d and %d are sides of RIGHT triangle.\n", a, b, c);
	else printf("%d, %d and %d are NOT sides of RIGHT triangle, just a TRIANGLE.\n", a, b, c);

	return 0;
}