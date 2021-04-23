#include<stdio.h>

int Sum(int a, int b) {
	return a+b;
}

void func() {
	int a,b,c;

	c = Sum(a,b);
	printf("c = %d\n",c);
}

int main() {
	func();
	return 0;
}
