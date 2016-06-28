#include <stdio.h>
int main() {
	int v;
	for (v = 1; v <= 5; v++) {
		printf("%d \t", v);
	}
	printf("\n");
	int d1 = 12 / 4;
	int d2 = 3 * 3;
	for (; d1 <= d2; d1++) {
		printf("%d \t", d1);
	}
	printf("\n");
	int i = 0;
	for (printf("Hello! \n"); i < 5; printf("You're awesome! \n")) {i++;}
	return 0;
}
