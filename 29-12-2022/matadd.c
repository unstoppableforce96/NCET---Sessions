// Matrix Addition
#include <stdio.h>
int main() {
	int r, c;
	scanf("%d%d", &r, &c);
	int A[r][c], B[r][c], S[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	
	// Summation
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			S[i][j] =  A[i][j] + B[i][j];
		}
	}
	
	// printing the result matrix
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", S[i][j]);
		}
		printf("\n");
	}
}