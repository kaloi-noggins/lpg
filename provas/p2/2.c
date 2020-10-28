//kalyl henings
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab;

    tab = calloc(4, sizeof(int *));
    for (size_t i = 0; i < 4; i++)
    {
        tab[i] = calloc(4, sizeof(int));
    }

    int sum = 0;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            scanf("%d", &tab[i][j]);
            switch (tab[i][j])
            {
            case 1:
                sum += 1;
                break;
            case 2:
                sum += 3;
                break;
            case 3:
                sum += 3;
                break;
            case 4:
                sum += 5;
                break;
            case 5:
                sum += 10;
                break;
            case 6:
                sum += 50;
                break;
            }
        }
    }

    printf("soma = %d\n", sum);
    return 0;
}
