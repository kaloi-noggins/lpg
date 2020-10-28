#include <stdio.h>
#include <math.h>
void calc_esfera(float r, float *area, float *volume);

int main()
{
    float r, area, volume;
    scanf("%f", &r);

    calc_esfera(r, &area, &volume);

    printf("%3.3f %3.3f\n", area, volume);
    return 0;
}

void calc_esfera(float r, float *area, float *volume)
{
    *area = 4 * 3.141517 * pow(r, 2);
    *volume = (4 / 3) * 3.141517 * pow(r, 3);
}