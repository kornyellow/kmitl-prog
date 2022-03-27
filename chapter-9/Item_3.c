#include <stdio.h>

int main() {
	char str[100], new_str[100];
	int pos = 0;
	printf(" *** Palindrome Verification ***\n");
	printf("Enter a sentence : ");
	scanf("%[^\n]", str);

	for(int i = 0; i < 100; i++) {
		if (str[i] == '\0') break;
		if ((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= 'a' && str[i] <= 'z')) {
			if (str[i] >= 'A' && str[i] <= 'Z')
				new_str[pos++] = str[i] + 32;
			else new_str[pos++] = str[i];
		}
	}
	new_str[pos] = '\0';

	int l = 0;
	int h = pos - 1;

	while (h > l)
	{
		if (new_str[l++] != new_str[h--])
		{
			printf("\"%s\" is NOT palindrom.\n", str);
			return 0;
		}
	}
	printf("\"%s\" is PALINDROME.\n", str);

	return 0;
}