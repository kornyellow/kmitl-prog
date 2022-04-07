#include <stdio.h>

int main() {
	char firstName[20], lastName[20];
	int age;
	printf("Enter name surname and age : ");
	scanf("%s %s %d", firstName, lastName, &age);

	int firstNameDigit = 0, lastNameDigit = 0;
	while (firstName[++firstNameDigit] != '\0');
	while (lastName[++lastNameDigit] != '\0');

	printf("First name = %2d digit\n", firstNameDigit);
	printf(" Last name = %2d digit\n", lastNameDigit);

	int luckyNumber = (firstNameDigit + lastNameDigit) * age;
	int luckyDigit =  (luckyNumber % 100) / 10;

	printf("Yours lucky number (%d) is %d", luckyNumber);
	return 0;
}