#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int main() {
	int a, b;
	
	printf("Enter numbers a and b: ");
	scanf(" %i %i", &a, &b);
	
	printf("\n");
	
	printf("%i\n", add(a, b));
	
	return 0;
}