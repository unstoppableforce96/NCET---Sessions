#include <stdio.h>
#include <conio.h>
#include <time.h>
int main()
{
	char buffer[50];
	int a = 15, b = 25, res;
	res = a + b;
	sprintf(buffer, "The sum of %d and %d is %d", a, b, res);
	printf("%s", buffer);
	return 0;
}