#include <stdio.h>
#include <string.h>

int char_to_int(char num[]);
int power_ten(int n);

int main() {
	char num1[10], num2[10];
	printf("Enter 2 number : ");
	scanf("%s %s", &num1, &num2);

	int n1 = char_to_int(num1);
	int n2 = char_to_int(num2);
	printf("%d + %d = %d\n", n1, n2, n1+n2);
}

int char_to_int(char num[]) {
	int n = 0;
	while(num[++n] != '\0');
	int result = 0;
	for(int i = 0; i < n; i++) result += (num[i] - '0') * power_ten(n - i - 1);
	return result;
}

int power_ten(int n) {
	if(n == 0) return 1;
	int result = 10;
	while(n-- > 1) result *= 10;
	return result;
}