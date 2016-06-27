#include <stdio.h>
int main() {
	int value = 33;
	float floatval = (float) value;
	float pi = 3.1415926;
	int intpi = (int) pi;
	short strshort;
	char tinystr[] = "X";
	short StrShort;
	printf("Pi as int = %d.\n", intpi );
	printf("Str as short = %d.\n", strshort);
	printf("Int as float = %d.\n", floatval);
	return 0;
}

