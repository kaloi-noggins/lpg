#include <stdio.h>
#include <stdlib.h>

#define size 5

int main()
{
    int **mat;
    mat = calloc(size, sizeof(int *));
    for (size_t i = 0; i < size; i++)
    {
        mat[i] = calloc(size, sizeof(int));
    }

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i; j < size; j++)
        {
            if (i == j)
            {
                mat[i][j] = 0;
            }
            else
            {
                scanf("%d", &mat[i][j]);
                mat[j][i] = mat[i][j];
            }
        }
    }

    int *vet = calloc(10, sizeof(int));

    for (size_t i = 0; i < 10; i++)
    {
        vet[i] = -1;
    }

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    int sum = 0;
    for (size_t i = 0; i < 9; i++)
    {
        if (vet[i] != -1 && vet[i + 1] != -1)
        {
            sum += mat[vet[i]][vet[i + 1]];
        }
    }

    printf("distancia = %d\n", sum);
}