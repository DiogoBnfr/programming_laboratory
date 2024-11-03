#include <stdio.h>

void multiplication_table(int n) {
	for (size_t i = 1; i <= n; i++) {
		printf("%d . %d = %d\n", i, n, i * n);
	}
}

int main() {
	multiplication_table(17);
}
