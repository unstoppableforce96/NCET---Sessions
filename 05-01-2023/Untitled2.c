#include <string.h>
#include <stdio.h>
struct Date {
	int dd;
	int mm;
	int yyyy;
};

struct Employee {
	int eid;
	char ename[20];
	struct Date doj;
};

int main() {
	struct Employee e;
	e.eid = 123;
	strcpy(e.ename, "Pavan");
	e.doj.dd = 25;
	e.doj.mm = 5;
	e.doj.yyyy = 2017;
	
	printf("%s with employee id %d is joined in %d-%d-%d", e.ename, e.eid, e.doj.dd, e.doj.mm, e.doj.yyyy);
}