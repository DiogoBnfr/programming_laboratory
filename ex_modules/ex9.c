#include <stdio.h>

char* swimmer_category(int age) {
	if (5 <= age && age <= 7) return "Childish A";
	if (8 <= age && age <= 10) return "Childish B";
	if (11 <= age && age <= 13) return "Juvenile A";
	if (14 <= age && age <= 17) return "Juvenile B";
	if (age >= 18) return "Adult";
	return "Invalid age";
}

int main() {
	int age = 12;
	printf("Swimmer with age %d category is %s\n", age, swimmer_category(age));
}
