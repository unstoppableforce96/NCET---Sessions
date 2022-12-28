#include <stdio.h>
int main() {
	int n; // 3 3
	scanf("%d", &n);
	int arr[n][n];
	
	// reading matrix
	for (int i = 0; i < n; i++) { // i = 0 1 2
		for (int j = 0; j < n; j++) { // i-1: 012
			scanf("%d", &arr[i][j]);
		}
	}
	
	// printing matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				printf("%d ", arr[i][j]);
			}
		}
	}
}