// w+ mode
#include <stdio.h>
int main() {
	FILE *ptr = fopen("new.txt", "w+"); // we can write and we can also read
	fputs("This is added through write + mode", ptr);
	// This is added through write + mode
	rewind(ptr);
	char buffer[50];
	fgets(buffer, 50, ptr);
	printf("%s", buffer);
}