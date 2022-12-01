// ceil and floor in math.h
#include <stdio.h>
#include <math.h>
int main()
{
	float x = 10.5;
	int floor_x = floor(x); // 10.5 --> 10
	int ceil_x = ceil(x); // 10.5 --> 11
	printf("Floored value of %.2f is %d\n", x, floor_x);
	printf("Ceiled value of %.2f is %d", x, ceil_x);
}