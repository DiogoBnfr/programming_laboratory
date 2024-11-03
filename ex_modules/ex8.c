#include <stdio.h>

unsigned int factorial(unsigned int n) {
	unsigned int result = n;
	for (size_t i = n - 1; i > 1; i--) {
		result *= i;
	}
	return result;
}

int main() {
	unsigned int n = 10;
	printf("!%d = %d\n", n, factorial(n));
}
