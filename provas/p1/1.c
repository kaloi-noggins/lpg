#include <stdio.h>

int div(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("A soma dos divisores de %d é %d\n", n, div(n));
    return 0;
}

int div(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}