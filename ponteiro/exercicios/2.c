#include <stdio.h>

void propagate(int a, int *vet);
void printa(int *vet);

int main()
{
    int size, a;

    scanf("%d", &size);
    scanf("%d", &a);

    int vet[size];

    propagate(a, vet);
    printa(vet);

    return 0;
}

void propagate(int a, int *vet)
{
    for (size_t i = 0; i < sizeof(vet) / sizeof(int); i++)
    {
        *(vet + i) = a;
    }
}

void printa(int *vet)
{
    for (size_t i = 0; i < sizeof(vet) / sizeof(*vet); i++)
    {
        printf("%2d", *(vet + i));
    }
}