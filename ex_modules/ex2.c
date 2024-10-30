#include <stdio.h>

int even_or_odd(int n) {
	if (n % 2 == 0) {
		return 1;
	}
	return 2;
}

int main() {
	printf("%d is %s\n", 1,(even_or_odd(1) == 1) ? "even" : "odd");
	printf("%d is %s\n", 2,(even_or_odd(2) == 1) ? "even" : "odd");
	printf("%d is %s\n", 3,(even_or_odd(3) == 1) ? "even" : "odd");
	printf("%d is %s\n", 4,(even_or_odd(4) == 1) ? "even" : "odd");
	return 0;
}
