// strrchr()
#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	scanf("%s", &str);
	char ch;
	scanf(" %c", &ch);
	printf("%s", strrchr(str, ch));
}