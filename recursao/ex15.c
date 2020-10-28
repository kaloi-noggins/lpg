#include <stdio.h>
#include <math.h>

long double somaCubo(long double n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("Soma dos cubos de 1 até %d  = %llf", n, somaCubo(n));
    return 0;
}

long double somaCubo(long double n)
{
    if (n==1)
    {
        return 1;
    }else
    {
        return (n*n*n)+somaCubo(n);
    }
}