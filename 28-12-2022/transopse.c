// Transpose
#include <stdio.h>
int main() {
	int r, c;
	scanf("%d%d", &r, &c); // 2 4
	int arr[r][c];
	for (int i = 0; i < r; i++) {
		for  (int j = 0; j < c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (int i = 0; i < c; i++) { // i = 0, 1, 2, 3
		for (int j = 0; j < r; j++) { // j = 0, 1
			printf("%d ", arr[j][i]); // arr[j][i] = arr[1][0]
		}
		printf("\n");
	}
}
	