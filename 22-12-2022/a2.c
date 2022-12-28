#include <stdio.h>
int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	// index      0   1   2   3   4
	printf("%d", arr[0] + arr[4] - arr[3]  * arr[2]);
	        //   -1140
}