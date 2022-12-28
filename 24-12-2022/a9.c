#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", A + i);
	}
	
	int B[n];
	int j = 0;
	for (int i = n - 1; i >= 0; i--) { // A = {10, 20, 30, 40 , 50}
		B[j] = A[i]; // B[j] = A[i] = B[1] = 40 {50, 40, 30, 20, 10}
		j++; 
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", B[i]);
	}
}