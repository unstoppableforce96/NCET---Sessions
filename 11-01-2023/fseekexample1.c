// fseek()
#include <stdio.h>
int main() {
	FILE *fp = fopen("test.txt", "r");
	fseek(fp, 10, SEEK_SET); // set the fp 10 bytes away from the beginning of the file
	char buffer[30];
	fgets(buffer, 30, fp);
	printf("%s", buffer);
}