#include <stdio.h>
#include <math.h>

struct ponto
{
    double x;
    double y;
};

int main()
{
    struct ponto p[2];

    for (size_t i = 0; i < 2; i++)
    {
        printf("Entre com x e y do ponto %d: ", i + 1);
        scanf("%lf %lf", &p[i].x, &p[i].y);
    }

    printf("%lf\n", sqrt(pow((p[1].x - p[0].x), 2) + pow((p[1].y - p[0].y), 2)));

    return 0;
}
