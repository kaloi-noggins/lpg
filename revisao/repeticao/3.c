#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Valor do ano %d: %.2lf\n", (i + 1), 1000*pow(1.05,i));
    }
    return 0;
}