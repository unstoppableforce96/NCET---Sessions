// strlwr()
#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	scanf("%s", &str);
	strlwr(str);
	printf("%s", str);
}