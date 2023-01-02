// strstr()
#include <stdio.h>
#include <string.h>
int main() {
	char str[100], substr[50];
	scanf("%s%s", &str, &substr);
	printf("%s", strstr(str, substr));
}