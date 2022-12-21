#include <stdio.h>
int main()
{
	int ch;
	scanf("%c", &ch);
	if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) printf("%c is an Alphabet", ch);
	else if (ch >= 47 && ch <= 58) printf("%c is a digit", ch);
	else printf("%c is a special character", ch);
}