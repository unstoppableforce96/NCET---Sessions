// append mode
#include <stdio.h>
int main() {
	FILE *ptr = fopen("xyz.txt", "a"); // we can write, but cannot read
	fputs("This content is appended recently", ptr);
}