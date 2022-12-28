#include <stdio.h>
int main() {
	int arr[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j < 7; j++) {
			if (arr[i][j] == 1) {
				if (arr[i - 1][j - 1] == 1 && arr[i - 1][j + 1] == 1 && arr[i + 1][j - 1] == 1 && arr[i + 1][j + 1]) {
					printf("%d %d", i + 1, j + 1);
					break;
				}
			}
		}
	}
}