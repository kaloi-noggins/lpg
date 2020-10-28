#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 13;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf(" n=%d\n p1=%p\n p2=%p\n p3=%p\n", n, p1, p2, p3);
    return 0;
}