// strrev() --> Inplace reverse
#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	scanf("%s", &str);
	strrev(str);
	printf("%s", str);
}