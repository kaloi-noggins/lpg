#include <stdio.h>
#include <string.h>

//matriz
int m[5][5];

int encontraMaior(int x);

int main()
{

    int x;
    printf("Entre com os termos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Entre com o termo a ser procurado:\n");
    scanf("%d", &x);

    int resp = encontraMaior(x);

    printf("%s", resp == -1 ? "Valor nao encontrado\n" : "");
    return 0;
}

int encontraMaior(int x)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j] == x)
            {
                printf("Valor encontrado na posicao (%d,%d)\n", i + 1, j + 1);
                return 1;
            }
        }
    }
    return -1;
}