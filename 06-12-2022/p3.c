#include <stdio.h> // printf(), scanf()
#include <limits.h> //
int main()
{
	// short --> lower_limit --> SHRT_MIN, upper_limit --> SHRT_MAX
	// int --> lower_limit --> INT_MIN, upper_limit --> INT_MAX
	// long --> lower_limit --> LONG_MIN, upper_limit --> LONG_MAX
	// long long --> lower_limit --> LLONG_MIN, upper_limit --> LLONG_MAX
	printf("short: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("int: %d to %d\n", INT_MIN, INT_MAX); // 4 bytes
	printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX); // 8 bytes
}