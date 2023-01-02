// Find a way to sort the array of string in ascending order of strings
#include <stdio.h>
#include <string.h>
int main() {
	char names[6][30];
	int n = 6;
	for (int i = 0; i < n; i++) {
		scanf("%s", &names[i]);
	}
	
//	for (int i = 0; i < n; i++) {
//		printf("String %d: %s\n", i + 1, names[i]);
//	}
	
	// bubble sort on strings
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if(strcmp(names[j], names[j + 1]) > 0) {
				char temp[30];
				strcpy(temp, names[j]);
				strcpy(names[j], names[j + 1]);
				strcpy(names[j+1], temp);
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%s ", names[i]);
	}
	
}