#include <stdio.h>
#include <math.h>

int dobro(int x);

int main()
{
    int x;
    printf("Entre com um numero: ");
    scanf("%d", &x);
    printf("(2*x)^2: %.0lf\n", pow(dobro(x),2));
    return 0;
}

int dobro(int x)
{
    return 2*x;
}