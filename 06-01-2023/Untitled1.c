#include <stdio.h>
#include <string.h>
struct Student {
	int sid;
	char sname[20];
	struct Date {
		int day;
		int month;
		int year;
		
	}doj;
};

int main() {
	struct Student s;
	s.sid = 123;
	strcpy(s.sname, "Pavan");
	s.doj.day = 5;
	s.doj.month = 5;
	s.doj.year = 2017;
	printf("%s with student id %d is joined in %d-%d-%d", s.sname, s.sid, s.doj.day, s.doj.month, s.doj.year);
}