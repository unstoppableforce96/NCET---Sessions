// strupr()
#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	scanf("%s", &str);
	strupr(str);
	printf("%s", str);
}