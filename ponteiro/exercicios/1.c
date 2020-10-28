#include <stdio.h>

void comp(int *a, int *b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    comp(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}

void comp(int *a, int *b)
{
    int temp;
    if (*a < *b)
    {
        temp = *b;
        *b = *a;
        *a = temp;
    }
}