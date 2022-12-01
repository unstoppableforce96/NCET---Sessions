// ceil and floor in math.h
#include <stdio.h>
#include <math.h>
int main()
{
	float x = 12.0; // 12.0 --> integer in floating point representation
	int floor_x = floor(x); // 12.0 --> 12
	int ceil_x = ceil(x); // 12.0 --> 12
	printf("Floored value of %.2f is %d\n", x, floor_x);
	printf("Ceiled value of %.2f is %d", x, ceil_x);
}