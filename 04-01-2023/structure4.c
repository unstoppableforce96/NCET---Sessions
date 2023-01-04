#include <stdio.h>
#include <string.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	// size of the structure Student is 24 bytes
};

int main() {
	// creating a structure variable
	struct Student s1, s2;
	// Accessing the members of the structure using . operator
	// initialize structure members
	s1.id = 123;
	strcpy(s1.name, "Pavan");
	
	printf("%d %s\n", s1.id, s1.name);
	
	s2.id = 456;
	strcpy(s2.name, "Kiran");
	
	printf("%d %s\n", s2.id, s2.name);
}