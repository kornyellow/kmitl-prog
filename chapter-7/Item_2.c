#include<stdio.h>

int isPrime(int);

int main() {
	int a, b, max, min, i, count=0;
	printf(" *** Prime number list *** \n");
	printf("Enter 2 positive numbers : ");
	scanf("%d %d",&a,&b);

	if(a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	if(a > 0 && b > 0) {
		int is_prime = 0;
		for(int i = a; i != b; i++) if(isPrime(i)) is_prime++;
		if(is_prime == 0) printf("NO prime number from %d to %d\n", a, b);
		else {
			if(is_prime != 1) printf("Total prime numbers : %d\n", is_prime);
			else printf("Total prime number : %d\n", is_prime);
			for(int i = a; i != b; i++) if(isPrime(i)) printf("%d ", i);
			printf("\n");
		}
	}
	else printf(" --- Incorrect input ---\n");

	return 0;
}

int isPrime(int x) {
	int i, count=0;
	for(i = 1; i <= x; i++) if(x % i == 0) count++;
	if(count==2) return 1;
	return 0;
}

