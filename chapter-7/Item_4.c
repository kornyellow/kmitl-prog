#include <stdio.h>

int has_lower_case(char string[]);
int has_upper_case(char string[]);
int has_number(char string[]);
int count_length(char string[]);
int verify(char password[]);

int main() {
	char password[200];
	printf("Enter password : ");
	scanf("%s", &password);
	printf("verifying . . .\n");
	int res = verify(password);
	if(res == 0) printf("> Your password is weak!\n");
	else printf("> Your password is strong!");
}
int verify(char password[]) {
	return (count_length(password) >= 8
		&& has_number(password) == 1
		&& has_lower_case(password) == 1
		&& has_upper_case(password) == 1);
}
int has_number(char string[]) {
	int n = 0;
	while(string[++n] != '\0')
		if(string[n] >= '0' && string[n] <= '9') return 1;
	return 0;
}
int has_lower_case(char string[]) {
	int n = 0;
	while(string[++n] != '\0')
		if(string[n] >= 'a' && string[n] <= 'z') return 1;
	return 0;
}
int has_upper_case(char string[]) {
	int n = 0;
	while(string[++n] != '\0')
		if(string[n] >= 'A' && string[n] <= 'Z') return 1;
	return 0;
}
int count_length(char string[]) {
	int n = 0;
	while(string[++n] != '\0');
	return n;
}