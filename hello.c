#include <stdio.h>
int main() {
	int value = 33;
	float floatval = (float) value;
	float pi = 3.1415926;
	int intpi = (int) pi;
	short strshort;
	char tinystr[] = "X";
	strshort = (short) (*tinystr);
	printf("Pi as int = %d.\n", intpi );
	printf("Str as short = %d.\n", strshort);
	printf("Int as float = %f.\n", floatval);
	return 0;
}

