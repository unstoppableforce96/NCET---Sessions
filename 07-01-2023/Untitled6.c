// 2d arrays and pointers
#include <stdio.h>
int main() {
	int a[4] = {10, 20, 30, 40};
	printf("%d %d\n", a, &a[0]);
	printf("%d %d\n", *a, *(&a[0]));
}