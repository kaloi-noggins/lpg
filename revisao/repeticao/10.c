#include <stdio.h>

int main()
{
    int x, cont1, cont2;

    cont1 = cont2 = 0;
    do
    {
        scanf("%d", &x);

        if ((x < 21) && (x != -99))
        {
            cont1++;
        }
        if (x > 50)
        {
            cont2++;
        }

    } while (x != -99);

    printf("Pessoas com mais de 50: %d\n", cont1);
    printf("Pessoas com menos de 21: %d\n", cont2);
    return 0;
}