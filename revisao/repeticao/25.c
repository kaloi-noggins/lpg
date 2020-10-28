#include <stdio.h>
#include <string.h>

int main()
{
    struct quartos_t
    {
        char nome[100];
        int diarias;
        double taxa;
    };

    struct quartos_t quarto[30];
    int max = 30;
    double total = 0;

    for (int i = 0; i < max; i++)
    {
        scanf("%100s", &quarto[i].nome);
        scanf("%d", &quarto[i].diarias);

        if (quarto[i].diarias < 15)
        {
            quarto[i].taxa = quarto[i].diarias * 50 + 4;
        }
        else if (quarto[i].diarias > 15)
        {
            quarto[i].taxa = quarto[i].diarias * 50 + 3;
        }
        else
        {
            quarto[i].taxa = quarto[i].diarias * 50 + 3.6;
        }

        total += quarto[i].taxa;
    }

    for (int i = 0; i < max; i++)
    {
        printf("Nome do cliente: %s\n", quarto[i].nome);
        printf("Total da conta: %d\n", quarto[i].diarias);
    }

    printf("Faturamento total: %.2lf\n", total);
    
    return 0;
}