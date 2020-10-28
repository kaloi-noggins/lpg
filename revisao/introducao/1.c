#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, delta;

    printf("Entre com a, b e c:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a != 0)
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta > 0)
        {
            printf("Raiz 1 : %lf\n", (-b + sqrt(delta)) / (2 * a));
            printf("Raiz 2 : %lf\n", (-b - sqrt(delta)) / (2 * a));
        }
        else
        {
            printf("Delta < 0, não existem raízes reais\n");
        }
    }
    else
    {
        printf("a=0, sistema linear\n");
    }

    return 0;
}