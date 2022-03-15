#include <stdio.h>

#define SIZE 10

int main() {
	struct student {
		char id[9];
		char name[40];
		int marking;
	} st[SIZE];

	int i, i_max;

	printf(" *** Structure Array 2 ***\n");
	printf("Enter data : ");

	for(i = 0; i < SIZE; i ++) {
		scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
	}

	i_max = 0;
	for(i = 0; i < SIZE; i ++) {
		if (st[i].marking > st[i_max].marking) i_max = i;
	}

	int studentCount = 0;
	for(i = 0; i < SIZE; i ++) {
		if (st[i].marking == st[i_max].marking) studentCount ++;
	}

	printf("\n\n *** Analyzing Data ***\n");
	printf("Max marking   = %d points, %d students.\n", st[i_max].marking, studentCount);
	int order = 1;
	for(i = 0; i < SIZE; i ++) {
		if (st[i].marking == st[i_max].marking) printf("%d. %s %s %d\n", order++, st[i].id, st[i].name, st[i].marking);
	}
	return 0;
}