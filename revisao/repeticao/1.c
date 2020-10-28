#include <stdio.h>

int main()
{
    int x, y, count = 0;

    printf("Entre com dois numeros inteiros, com o primeiro maior que o segundo ");
    scanf("%d %d", &x, &y);

    for (int i = y; i < x; i += 3)
    {
        count++;
    }

    printf("Foram encontrados %d divisores de 3 no intervalo %d ate %d\n", count, x, y);

    return 0;
}