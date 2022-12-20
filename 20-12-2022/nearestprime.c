#include <stdio.h>
int is_prime(int n) {
    int fc = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            fc++;
        }
    }
    if (fc == 2) return 1;
    else return 0;
}

int prev_prime(int n) {
    while (1) {
        if (is_prime(n) == 1) return n;
        n--;
    }
}

int next_prime(int n) {
    while (1) {
        if (is_prime(n) == 1) return n;
        n++;
    }
}


int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        int pp = prev_prime(x);
        int np = next_prime(x);
    
        if (x - pp <= np - x) printf("%d\n", pp);
        else printf("%d\n", np);
    }
}