#include <stdio.h>
#include <math.h>

float areaEsfera(float r);

int main()
{
    float r;

    printf("Entra com um raio ae: ");
    scanf("%f", &r);
    printf("Area da esfera: %.2f\n", areaEsfera(r));
    return 0;
}

float areaEsfera(float r)
{
    float tmp = 0;
    tmp = 3.14 * 1.33;
    return tmp * pow(r, 3);
}