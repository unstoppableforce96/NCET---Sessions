#include <stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z') printf("%d", ch - 96);
	else printf("%d", ch - 64);
}
	