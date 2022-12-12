#include <stdio.h>
int main()
{
    int n, r;
    scanf("%d", &n);
    int edc = 0, odc = 0;
    while (n > 0)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
            edc++;
        }
        else
        {
            odc++;
        }
        n = n / 10;
    }
    if (edc == 0)
    {
    	printf("Odd");
    }
    else if (odc == 0)
    {
    	printf("Even");
    }
    else
    {
    	printf("Mixed");
    }
}