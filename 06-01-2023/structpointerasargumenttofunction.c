// Sending structure as an argument to function
// int to a function --> call by value
// int array to a function --> call by ref
#include <stdio.h>
struct Point {
	int x;
	int y;
};

void swap(struct Point *p) {
	int t = p->x;
	p->x = p->y;
	p->y = t;
}

int main() {
	struct Point p;
	p.x = 10;
	p.y = 20;
	printf("Before swapping the structure members x = %d y = %d\n", p.x, p.y);
	swap(&p); // call by ref
	printf("After swapping the structure members x = %d y = %d", p.x, p.y);
}