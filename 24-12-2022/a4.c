#include <stdio.h>
void update(int a[]) // a[] = {10, 20, 30, 40, 50}
{
	a[0] = 100; // a[0] = 100
}

int main()
{
	int n[5] = {10, 20, 30, 40, 50};
	update(n); // {10, 20, 30, 40, 50}
	for (int i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}
}