#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int y) {
	return x / y;
}

int main() {
	int a, b;
	
	printf("Enter numbers a and b: ");
	scanf(" %i %i", &a, &b);
	
	printf("\n");
	
	printf("%i\n", add(a, b));
	printf("%i\n", subtract(a, b));
	printf("%i\n", multiply(a, b));
	printf("%i\n", divide(a, b));
	printf("\n");
	
	int * arr;
	int x, n = 0;
	int sum = 0;
	
	while(n == 0) {
		printf("Enter a number for the size of the array: ");
		scanf(" %i", &n);
		if(n > 5 || n < 1) {
			printf("Invalid number for array\n");
			n = 0;
		}
	}

	arr = (int *)malloc(n * sizeof(int));
	
	for(x = 0; x < n; x++) {
		printf("Enter the number at index %i: ", x);
		scanf(" %i", &arr[x]);
		sum = sum + arr[x];
	}
	
	printf("The average of the numbers is %i\n", sum/n);
	
	free(arr);
	
	return 0;
}
