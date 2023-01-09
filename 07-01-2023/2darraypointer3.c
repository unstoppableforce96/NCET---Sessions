#include <stdio.h>
int main() {
	int a[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	printf("%d %d\n", a, &a[0][0]);
	printf("%d %d", *a, *(&a[0][0])); // a is a pointer to the first 1st 1d array
}