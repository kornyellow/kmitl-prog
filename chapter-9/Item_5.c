#include <stdio.h>

char format[10][10] = {
	"zero",
	"one",
	"two",
	"three",
	"four",
	"five",
	"six",
	"seven",
	"eight",
	"nine"
};

void number2word(char number, char* str);

int main() {
	char phone_number[15],str[15]="nothing";
	int i;
	printf("*** Number to words ***\n");
	printf("Enter phone number : ");
	scanf("%s",phone_number);
	printf("%s ==> ",phone_number);
	for(i=0;phone_number[i] != '\0';i++) {
		number2word(phone_number[i]-0x30,str);
		printf("%s ",str);
	}
	printf("\n");
	return 0;
}

void number2word(char number, char* str) {
	char* emp = str;
	while (*emp != '\0') {
		*emp = '\0';
		emp ++;
	}

	int ptr = 0;
	while (format[number][ptr] != '\0') {
		*str = format[number][ptr++];
		str ++;
	}
	return;
}
