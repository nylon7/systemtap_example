#include <stdio.h>

int g = 100;

int sum(int a, int b ) {
	g = 102;
	return a+b;
}

int func(int d, const char *n) {
	int a,b,c;

	g = 101;
	a = 1;
	b = 3;
	c = sum(a,b);
	return c;
}

int main() {
	func(100,"test");
	return 0;
}
