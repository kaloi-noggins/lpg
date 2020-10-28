#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m, **mt, l, c;

    printf("Entra com as dimensão da matriz ae corno: ");
    scanf("%d %d", &l, &c);

    m = calloc(l, sizeof(int *));
    for (size_t i = 0; i < l; i++)
    {
        m[i] = calloc(c, sizeof(int));
    }

    printf("Entra com os termo da matriz ae corno:\n");

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("Matriz lida:\n");
    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }

    mt = calloc(c, sizeof(int *));
    for (size_t i = 0; i < c; i++)
    {
        mt[i] = calloc(l, sizeof(int));
    }

    for (size_t i = 0; i < c; i++)
    {
        for (size_t j = 0; j < l; j++)
        {
            mt[i][j] = m[j][i];
        }
    }

    printf("\n");
    printf("Matriz transposta:\n");
    for (size_t i = 0; i < c; i++)
    {
        for (size_t j = 0; j < l; j++)
        {
            printf("%3d", mt[i][j]);
        }
        printf("\n");
    }

    return 0;
}