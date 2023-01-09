// Nested Structures
// 1. By creating seperate structures
#include <stdio.h>
#include <string.h>
struct Date {
	int day;
	int month;
	int year;
};

struct Employee {
	int eid;
	char ename[20];
	struct Date doj;	
};

// date --> day - month - year
int main() {
	struct Employee e;
	e.eid = 123;
	strcpy(e.ename, "Pavan");
	e.doj.day = 22;
	e.doj.month = 5;
	e.doj.year = 2017;
	printf("%s with employee id %d is joined in the institute on %d-%d-%d", e.ename, e.eid, e.doj.day, e.doj.month, e.doj.year);
}