#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100];

    float cont, maior, menor, total, salario;
    cont = maior = menor = total = salario = 0;

    do
    {
        scanf("%", &nome);
        scanf("%lf", &salario);

        total += salario;
        cont++;

        if (salario < menor)
        {
            menor = salario;
        }
        else if (salario > maior)
        {
            maior = salario;
        }

    } while (strcmp("fim", nome) != 0);

    printf("Media salarial: %.2lf\n", total / cont);
    printf("Maior salario: %.2lf\n", maior);
    printf("Menor salaraio: %.2lf\n", menor);

    return 0;
}