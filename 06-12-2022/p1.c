#include <stdio.h>
int main()
{
	// __builtin_popcount(x)
	// returns the number of 1s in bin repr of x
	printf("%d\n", __builtin_popcount(9)); // 1001
	printf("%d\n", __builtin_popcount(15)); // 1111
	
	// __builtin_clz(x)
	// returns the number of leading 0s in the 32-bit
	// bin repr of the given number
	// 32-bit repr of 9
	// 00000000 00000000 00000000 00001001
	
	printf("%d\n", __builtin_clz(9));
	
	printf("%d\n", __builtin_ctz(16)); // 1
}