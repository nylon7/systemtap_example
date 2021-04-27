#include <stdio.h>

typedef struct Test {
	int a;
	int b;
} Test;

int func(void *p) {
	printf("in function\n");
}

int main() {
	Test t = {.a=101,.b=119};
	func(&t);
	return 0;
}
