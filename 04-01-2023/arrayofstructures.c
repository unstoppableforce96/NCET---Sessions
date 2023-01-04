#include <stdio.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	float cgpa; // 4 bytes
	
};

int main() {
	int n;
	printf("How many students?: ");
	scanf("%d", &n);
	struct Student s[n]; // created an array of structures;
	printf("%d bytes\n", sizeof(s)); // checking the size of the array of structure variable
	for (int i = 0; i < n; i++) {
		printf("Enter student %d details\n", i+1);
		printf("ID?: ");
		scanf("%d", &s[i].id);
		printf("Name:? ");
		scanf("%s", &s[i].name);
		printf("CGPA:? ");
		scanf("%f", &s[i].cgpa);
	}
	// printing the data
	for (int i = 0; i < n; i++) {
		printf("%d %s %.2f\n", s[i].id, s[i].name, s[i].cgpa);
	}	
}