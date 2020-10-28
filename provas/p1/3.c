#include <stdio.h>
#include <math.h>

int hiperfat(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("O hiperfatorial de %d é %d\n", n, hiperfat(n));
}

int hiperfat(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return pow(n, n) * hiperfat(n - 1);
    }
}