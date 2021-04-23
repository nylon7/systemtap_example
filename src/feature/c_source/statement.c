#include <stdio.h>

int main(int argc, char *argv[]) {
	int local_var;

	local_var = 1;
	printf("local_var = %d\n",local_var);
	local_var = 3;
	printf("local_var = %d\n",local_var);
	return 0;
}
