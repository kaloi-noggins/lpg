#include <stdio.h>

void fillArray(int val, int size, int *array);
void printArray(int size, int *array);

int main()
{
    int val, size;

    printf("Entra com o tamanho do array corno: ");
    scanf("%d", &size);

    int array[size];
    printf("Entra com o valor pra propagar no array ae corno: ");
    scanf("%d", &val);
    fillArray(val, size, array);
    printArray(size, array);

    return 0;
}

void fillArray(int val, int size, int *array)
{
    for (size_t i = 0; i < size; i++)
    {
        *(array + i) = val;
    }
}

void printArray(int size, int *array)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%2d", *(array + i));
    }
    printf("\n");
}