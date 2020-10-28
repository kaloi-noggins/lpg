#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void troca(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}