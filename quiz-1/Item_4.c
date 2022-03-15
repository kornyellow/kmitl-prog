#include <stdio.h>

int main() {
	char fName[100], lName[100];
	printf("Enter full name : ");
	scanf("%s", &fName);
	scanf("%s", &lName);

	printf("Result is %c%c%cKMITL%c%c\n", lName[0], lName[1], lName[2], fName[0], fName[1]);
	return 0;
}