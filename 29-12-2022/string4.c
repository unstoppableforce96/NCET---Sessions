#include <stdio.h>
int main() 
{
	char str[1000];
	scanf("%[^\n]s", str);
	int sum = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') { // '0' --> 48, '1' --> 49, '2' --> 50
			sum += str[i] - 48;
		}
	}
	printf("%d", sum);
}