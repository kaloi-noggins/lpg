#include <stdio.h>
#include <stdio.h>

void fill(int matriz[][2]);
void print(int matriz[][2]);
void copycat(int matriz[][2]);
void dobra(int matriz[][2]);

int main()
{
    int matriz[2][2];

    fill(matriz);
    print(matriz);
    copycat(matriz);
    dobra(matriz);

    return 0;
}

void fill(int matriz[][2])
{
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void print(int matriz[][2])
{
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
}

void copycat(int matriz[][2])
{
    int copy[2][2];

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            copy[i][j] = matriz[i][j];
        }
    }

    print(copy);
}

void dobra(int matriz[][2])
{
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            matriz[i][j] = 2 * matriz[i][j];
        }
    }
    print(matriz);
}