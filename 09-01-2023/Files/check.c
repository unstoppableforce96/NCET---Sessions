// Reading a file in C
#include <stdio.h>
int main() {
	FILE *fp = fopen("sample.txt", "r"); // make sure you have a file sample.txt present in the folder
	if (fp == NULL) {
		printf("File Not found");
	}
	else {
		// fgetc()
		// fgets()
//		// fscanf()
//		char ch = fgetc(fp);
//		printf("%c", ch);
//		char ch1 = fgetc(fp);
//		printf("%c", ch1);
//		char ch;
//		do {
//			ch = fgetc(fp);
//			if (feof(fp)) {
//				break;
//			}
//			printf("%c", ch);
//		} while(1);
//		char str[100];
//		fgets(str, 100, fp);
//		printf("%s", str);
		int n;
		float f;
		char str[100];
		fscanf(fp, "%d %f %s", &n, &f, &str);
		printf("This is number: %d\n", n);
		printf("This is point value: %.2f\n", f);
		printf("This is a string: %s", str);
	}
}