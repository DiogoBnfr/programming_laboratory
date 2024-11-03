#include <stdio.h>

// p é um número N
// p > 0
// n / p = 0
// m é um número N
// m tal que p * m = n
unsigned int natural_divisors(unsigned int n) {
	unsigned int count = 0;
	for (size_t i = 1; i <= n; i++) {
		if (n % i == 0) count++;
	}
	return count;
}

void main() {
	printf("%d has %d divisors.\n", 120, natural_divisors(120));
}
