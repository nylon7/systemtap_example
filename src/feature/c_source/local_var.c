#include <stdio.h>

int add(int a, int b) {
	return a+b;
}

int func(int d, const char *n) {
	int a,b,c;

	a = 1;
	b = 3;
	c = add(a,b);
	return c;
}

int main() {
	func(100,"test");
	return 0;
}
