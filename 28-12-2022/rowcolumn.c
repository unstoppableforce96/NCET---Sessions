// Max of row-wise and column-wise sum
#include <stdio.h>
#include <limits.h>
int main() {
	int r, c;
	scanf("%d%d", &r, &c); // 2 4
	int arr[r][c];
	for (int i = 0; i < r; i++) {
		for  (int j = 0; j < c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int max_row_sums = INT_MIN;
	for (int i = 0; i < r; i++) {
		int sum = 0;
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
		if (sum > max_row_sums) max_row_sums = sum;
	}
	printf("\n");
	
	int max_column_sums = INT_MIN;
	
	for (int i = 0; i < c; i++) { 
		int sum = 0;
		for (int j = 0; j < r; j++) { 
			sum += arr[j][i];
		}
		if (sum > max_column_sums) max_column_sums = sum;
	}
	
	if(max_row_sums > max_column_sums) printf("%d", max_row_sums);
	else printf("%d", max_column_sums);
}
	