// Sending a 2D array to a function as argument
#include <stdio.h>
void print_2D_Array(int r, int c, int A[][c])
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int r, c;
	scanf("%d%d", &r, &c);
	int arr[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	// print the 2D array
	print_2D_Array(r, c, arr);
}