#include <stdio.h>

int main()
{
    int a[3], b[3][3];

    //input vetor
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    //input matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
            b[i][j]*=a[i];
        }
    }

    printf("Matriz multiplicada pelo vetor:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}