// strncmp()
#include <string.h>
#include <stdio.h>
int main() {
    char s1[100], s2[100];
    scanf("%s%s", &s1, &s2);
    int res = strncmp(s1, s2, 5);
    printf("%d", res);
}