#include <stdio.h>
struct Nums {
	int x;
	int y;
};

int main() {
	struct Nums n;
	n.x = 10;
	n.y = 20;
//	printf("%d %d", n.x, n.y);
	
	struct Nums m;
	m = n;
//	printf("%d %d", m.x, m.y);
	printf("%d %d", &n, &m);
}