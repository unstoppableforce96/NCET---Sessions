#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); // 5
	int arr[n]; // arr[5] 
	for (int i = 0; i < n; i++) // i = 0 --> arr[0], i = 1 --> arr[1], i = 2 --> arr[2]
	{
		scanf("%d", &arr[i]);
	}
	
	// printing the array elements
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i] * arr[i]);
	}
}
	