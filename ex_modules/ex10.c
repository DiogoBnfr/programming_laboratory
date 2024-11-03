#include <stdio.h>

int is_negative(int n) {
	if (n < 0) return 0;
	return 1;
}

int main() {
	int n = -1;
	printf("%d is negative? %d\n", n, is_negative(n));
}
