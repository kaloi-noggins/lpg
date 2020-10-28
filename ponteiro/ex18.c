#include <stdio.h>

int negativo(float *array, int size);
void fillArray(float *array, int size);

int main()
{
    int size;

    printf("Entra com um tamanho para o array ae corno: ");
    scanf("%d", &size);

    float array[size];

    fillArray(array, size);
    int n = negativo(array, size);

    printf("tem %d numero(s) negativo(s) no array\n");

    return 0;
}

void fillArray(float *array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("Entre com o termo %d ae corno: ", i + 1);
        scanf("%f", (array + i));
    }
}

int negativo(float *array, int size)
{
    int cont = 0;
    for (size_t i = 0; i < size; i++)
    {
        printf("%d \n i=%d \n", *(array + i), i);
        if (*(array + i) < 0)
        {
            cont++;
        }
    }
    return cont;
}
