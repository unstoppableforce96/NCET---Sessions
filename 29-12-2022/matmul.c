// Matrix Multiplication
#include <stdio.h>
int main() {
	int R1, C1, R2, C2;
	scanf("%d%d", &R1, &C1);
	int A[R1][C1];
	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C1; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	scanf("%d%d", &R2, &C2);
	int B[R2][C2];
	for (int i = 0; i < R2; i++) {
		for (int j = 0; j < C2; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	
	int C[R1][C2];
	if (C1 != R2) {
		printf("Multiplication is NOT POSSIBLE");
	}
	else {
		for (int i = 0; i < R1; i++) { // i = 0
			for (int j = 0; j < C2; j++) { // j = 1
				C[i][j] = 0;
				for (int k = 0; k < R2; k++) { // k = 1
					C[i][j] += A[i][k] * B[k][j]; // c[0][0] += 21
				}
			}
		}
	}
	
	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C2; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
}	