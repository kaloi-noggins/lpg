#include <stdio.h>

void floyd(int n);

int main()
{

    int n;
    scanf("%d", &n);
    floyd(n);
    return 0;
}

void floyd(int n)
{
    int ln = 1, count = 1;

    do
    {

        for (int i = 0; i < ln; i++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
        ln++;

    } while (ln < n + 1);
}