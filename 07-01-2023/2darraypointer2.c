// 2d arrays and pointers
#include <stdio.h>
int main() {
	int a[2][2] = {10, 20, 30, 40};
	for (int *p = &a[0][0]; p <= &a[1][1]; p++) {
		printf("%d ", *p);
	}
}