#include <stdio.h>

long double sum(long double n);

int main()
{
    long double n;
    scanf("%llf",&n);
    printf("%llf\n",sum(n));
    return 0;
}

long double sum(long double n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n + sum(n-1);
    }
}