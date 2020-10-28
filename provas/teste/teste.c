// Aluno : Kalyl Henings

#include <stdio.h>
#include <stdlib.h>

int verifica(int *vet, int **mat, int size, int lin, int col);
void inverte(int **matriz, int lin, int col);
void fillVet(int *vet, int size);
void fillMat(int **mat, int lin, int col);

int main()
{
    int size, lin, col;
    int *vet, **mat;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &size);

    printf("Entre com as linhas a colunas da matriz: ");
    scanf("%d %d", &lin, &col);

    //alocação vetor
    vet = calloc(size, sizeof(int));

    //alocação matriz
    mat = calloc(col, sizeof(int *));
    for (size_t i = 0; i < lin; i++)
    {
        mat[i] = calloc(lin, sizeof(int));
    }

    fillVet(vet, size);
    fillMat(mat, lin, col);

    printf("verifica: %d\n", verifica(vet, mat, size, lin, col));
    inverte(mat, lin, col);

    return 0;
}

int verifica(int *vet, int **mat, int size, int lin, int col)
{
    int flagl = 0, flagc = 0;

    if (size > lin || size > col)
    {
        return -1;
    }
    for (size_t i = 0; i < lin && i < size; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            for (size_t k = 0; k < size && k < lin; k++)
            {
                if ((vet[k] == mat[i][j + k]) && ((k + 1) == lin))
                {
                    flagl = 1;
                }
            }
        }
    }

    if (flagc == 1 && flagl == 1)
    {
        return 1;
    }
    return -1;
}

void inverte(int **mat, int lin, int col)
{
    int **inversa;
    inversa = calloc(lin, sizeof(int *));
    for (size_t i = 0; i < lin; i++)
    {
        inversa[i] = calloc(col, sizeof(int));
    }

    for (size_t i = 0; i < lin; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            inversa[j][i] = mat[i][j];
        }
    }

    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < lin; j++)
        {
            printf("%2d", inversa[i][j]);
        }
        printf("\n");
    }
}

void fillVet(int *vet, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("Entre com o %ld termo do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
}

void fillMat(int **mat, int lin, int col)
{
    for (size_t i = 0; i < lin; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            printf("Entre com o termo %ld %ld da matriz: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}