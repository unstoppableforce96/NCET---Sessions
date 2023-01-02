// strcmp()
#include <string.h>
#include <stdio.h>
int main() {
    char s1[100], s2[100];
    scanf("%s%s", &s1, &s2);
    int res = strncmp(s1, s2);
    if (res == 0) {
    	printf("%s is equal to %s", s1, s2);
    } else if (res < 0) {
    	printf("%s is lexicographically smaller than %s", s1, s2);
    } else {
    	printf("%s is lexicographically larger than %s", s1, s2);
    }
}