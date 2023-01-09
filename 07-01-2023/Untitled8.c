#include <stdio.h>
int main() {
	int a[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	printf("%d %d %d\n", a, a + 1, a + 2);
	printf("%d %d %d\n", *a, *(a+1), *(a + 2)); // a is a pointer to the first 1st 1d array
	printf("%d %d %d\n", *(*a), *(*(a+1)), *(*(a + 2)));
	printf("%d %d %d %d %d %d %d %d %d\n", *(*a), *(*a+1),*(*a+2), *(*(a+1)), *(*(a+1)+1), *(*(a+1)+2), *(*(a+2)), *(*(a+2)+1), *(*(a+2)+2));
}