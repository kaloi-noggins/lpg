#include <stdio.h>

int checaNum(int x);

int main()
{
    int x;
    printf("Entra com um número ae: ");
    scanf("%d", &x);

    int resp = checaNum(x);

    if (resp == 1)
    {
        printf("Positivo\n");
    }
    else if (resp == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("Negativo\n");
    }

    return 0;
}

int checaNum(int x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}