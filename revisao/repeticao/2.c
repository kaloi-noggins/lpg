#include <stdio.h>

int main()
{
    int maior, menor;
    maior = 0;

    scanf("%d", &menor);

    for (int i = 0; i < 9; i++)
    {
        int x;
        scanf("%i", &x);

        if (x > maior)
        {
            maior = x;
        }
        else if (x < menor)
        {
            menor = x;
        }

    }

    printf("O maior valor fornecido foi %d, e o menor foi %d\n", maior, menor);
    return 0;
}