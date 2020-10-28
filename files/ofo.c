#include <stdlib.h>
#include <stdio.h>
int main()
{
    int conta;
    char nome[30];
    double saldo;
    FILE *f;
    if ((f = fopen("C:\\Omir\\arquivo.txt", "w")) == NULL)
    {
        printf("ARQUIVONAOPODESERALBERTO\n");
        return (1);
    }
    else
    {
        scanf("%d %s %lf", &conta, nome, &saldo);
        while (!feof(stdin))
        {
            printf("%d%s%.2f\n", conta, nome, saldo);     /*imprimanatela*/
            fprintf(f, "%d%s%.2f\n", conta, nome, saldo); /*imprimanoarquivof*/
            scanf("%d%s%lf", &conta, nome, &saldo);
        }
        int fclose(FILE * f);
    }
    return 0;
}