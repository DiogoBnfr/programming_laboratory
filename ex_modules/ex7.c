#include <stdio.h>

int years_to_days(int y) {
	return y * 365;
}

int main() {
	int y = 20;
	printf("%d years is equal to %d days\n", y, years_to_days(y));
}
