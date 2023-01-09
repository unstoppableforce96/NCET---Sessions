#include <stdio.h>
#include <string.h>
struct Employee {
	int eid;
	char name[20];
	struct Date {
		int day;
		int month;
		int year;
	}doj;
};

int main() {
	struct Employee e;
	e.eid = 123;
	strcpy(e.name, "pavan");
	e.doj.day = 25;
	e.doj.month = 5;
	e.doj.year = 2017;
	printf("%s with emp id %d is joined in the org. on %d-%d-%d", e.name, e.eid, e.doj.day, e.doj.month, e.doj.year);
}