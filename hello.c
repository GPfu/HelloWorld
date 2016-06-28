#include <stdio.h>
int main() {
		int testValue = 3;
		switch (testValue) {
			default:
				printf("The value is not one being tested");
			case 1:
				printf("The value is 1");
			case 2:
				printf("The value is 2");
			case 3:
			case 4:
				printf("The value is 3 or 4");
				break;
		}
		printf("\n");
		return 0;
}
