#include <stdio.h>
#include <string.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	char grade; // 1 byte
	float perc; // 4 bytes
	int marks[5]; // 5 * 4 --> 20 bytes
	int total; // 4 bytes
	// the size of the structure is 
	
};

int main() {
	// creating a structure variable
	struct Student s1;
	scanf("%d", &s1.id);
	scanf("%s", &s1.name);
	for (int i = 0; i < 5; i++) {	
		scanf("%d", &s1.marks[i]);
	}
	s1.total = 0;
	for (int i = 0; i < 5; i++) {
		s1.total += s1.marks[i];
	}
	
	s1.perc = s1.total / 5.0;
	
	printf("%d %s %d %.2f\n", s1.id, s1.name, s1.total, s1.perc);
}