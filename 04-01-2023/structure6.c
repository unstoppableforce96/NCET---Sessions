#include <stdio.h>
#include <string.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	float cgpa; // 4 bytes
	// size of the structure Student is 28 bytes
};

int main() {
	// creating a structure variable
	struct Student s1 = {.cgpa = 7.2, .id = 123, .name = "Pavan"};
	struct Student s2 = {.name = "Kiran", .cgpa = 8.8, .id = 456};
	
	printf("%d %s %.2f\n", s1.id, s1.name, s1.cgpa);
	printf("%d %s %.2f\n", s2.id, s2.name, s2.cgpa);
}