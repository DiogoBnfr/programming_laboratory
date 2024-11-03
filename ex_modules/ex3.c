#include <stdio.h>

#define ARRAYSIZE(x) (sizeof x / sizeof x[0])

void array_max_min(int *arr, size_t size) {
	if (size < 50) return;
	int max = arr[0];
	int min = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (arr[i] > max) { max = arr[i]; }
		if (arr[i] < min) { min = arr[i]; }
	}
	printf("Max: %d\nMin: %d\n", max, min);
}

int main() {
	int arr[50];
	for (size_t i = 0; i < ARRAYSIZE(arr); i++) {
		arr[i] = i * 2;
	}
	array_max_min(arr, ARRAYSIZE(arr));
	return 0;
}
