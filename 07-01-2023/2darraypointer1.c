// 2d arrays and pointers
#include <stdio.h>
int main() {
	int a[2][2] = {10, 20, 30, 40};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", &a[i][j]);
		}
	}
}