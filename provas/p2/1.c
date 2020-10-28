// kalyl henings
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m;

    {
        m = calloc(3, sizeof(int *));

        for (int i = 0; i < 3; i++)
        {
            m[i] = calloc(3, sizeof(int));
        }

        for (size_t i = 0; i < 3; i++)
        {
            for (size_t j = 0; j < 3; j++)
                scanf("%d", &m[i][j]);
        }
    }

    int count = 0, maior, l, c;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                maior = m[i][j];
                l = i;
                c = j;
                count++;
            }
            else
            {
                if (m[i][j] > maior)
                {
                    count = 0;
                    maior = m[i][j];
                    l = i;
                    c = j;
                    count++;
                }
                else if (m[i][j] == maior)
                {
                    count++;
                }
            }
        }
    }

    if (count > 1)
    {
        int **repete;
        repete = calloc(count, sizeof(int *));
        for (size_t i = 0; i < count; i++)
        {
            repete[i] = calloc(3, sizeof(int));
        }

        for (size_t i = 0; i < count; i++)
        {
            repete[i][0] = maior;
            repete[i][1] = l;
            repete[i][2] = c;
        }

        for (size_t i = 0; i < count; i++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                printf("%3d", repete[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("%d %d %d\n", maior, l, c);
    }

    return 0;
}
