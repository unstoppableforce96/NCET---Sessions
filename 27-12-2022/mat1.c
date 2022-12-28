#include <stdio.h>
int main() {
	int r, c; // 3 3
	scanf("%d%d", &r, &c);
	int arr[r][c];
	
	// reading matrix
	for (int i = 0; i < r; i++) { // i = 0 1 2
		for (int j = 0; j < c; j++) { // i-1: 012
			scanf("%d", &arr[i][j]);
		}
	}
	
	// printing matrix
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}