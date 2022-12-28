#include <stdio.h>
#include <math.h>
#include <limits.h>
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
	int pdiag_sum = 0, sdiag_sum = 0, max = INT_MIN;
	for (int i = 1; i < n - 1; i++) {
		int sum = 0;
		for (int j = 1; j < n - 1; j++) {
			sum = arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1];
		}
		if (sum > max) {
			max = sum;
		}
	}
	
	printf("%d", max);
}