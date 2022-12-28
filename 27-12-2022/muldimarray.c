#include <stdio.h>
int main() {
	// indexes         0  1   2   3     0   1   2   3     0   1   2   3
	int arr[2][3][4] = {{{57, 45, 80, 81}, {28, 52, 66, 96}, {90, 42, 31, 35}},
						{{61, 88, 75, 31}, {41, 63, 32, 41}, {56, 95, 34, 100}}};
	printf("%d", arr[0][1][2]); // Marks student2 got in Maths in CIE1
}