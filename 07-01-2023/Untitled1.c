#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[n][n];
	for (int *p = &arr[0][0]; p < &arr[n-1][n-1]; p++) {
		scanf("%d", p);
	}
	
	for (int *p = &arr[0][0]; p < &arr[n-1][n-1]; p++) {
		printf("%d ", *p);
	}
}