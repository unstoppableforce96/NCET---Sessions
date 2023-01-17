// ftell()
#include <stdio.h>
int main() {
	FILE *fp = fopen("test.txt", "r");
	printf("%d", ftell(fp)); // where the file pointer currently is
	fgetc(fp);
	printf("\n%d", ftell(fp));
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	printf("\n%d", ftell(fp));
}