#include <stdio.h>

unsigned int sum(unsigned int n) {
	unsigned int sum = 0;
	for (size_t i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int n = 4;
	printf("sum from 1 to %d is equal to %d\n", n, sum(n));
}
