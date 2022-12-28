#include <stdio.h>
int main() {
	int arr[2][3][4] = {{{60, 53, 47, 93},
   		 	  		    {63, 76, 52, 71},
			     		{71, 49, 30, 87}}, 
					  {{51, 76, 97, 38}, 
						{81, 28, 50, 37}, 
					  {87, 89, 30, 83}}};
	// 1 --> CIE, Student --> 3, Sub --> 3
//	printf("%d", arr[0][2][2]); 
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
	}
}