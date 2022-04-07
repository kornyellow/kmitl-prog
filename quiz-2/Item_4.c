#include <stdio.h>

int main() {
	int a, b, c, min, max, mid;
	printf(" *** Check for right triangle ***\n");
	printf("Enter 3 sides of triangle : ");
	scanf("%d %d %d", &a, &b, &c);

	if ((c >= a) && (c >= a)) {
		max = c;
		if (b >= a){
			mid = b;
			min = a;
		}
		else {
			mid = a;
			min = b;
		}
	}
	else if ((b >= c) && (b >= a)) {
		max = b;
		if (c >= a){
			mid = c;
			min = a;
		}
		else {
			mid = a;
			min = c;
		}
	}
	else if ((a >= c) && (a >= c)) {
		max = a;
		if (c >=b){
			mid = c;
			min = b;
		}
		else {
			mid = b;
			min = c;
		}
	}

	if (a == 0 || b == 0 || c == 0 || max > mid + min) printf("%d, %d and %d are NOT sides of triangle.\n", a, b, c);
	else if (max * max == (mid * mid) + (min * min)) printf("%d, %d and %d are sides of RIGHT triangle.\n", a, b, c);
	else printf("%d, %d and %d are NOT sides of RIGHT triangle, just a TRIANGLE.\n", a, b, c);

	return 0;
}