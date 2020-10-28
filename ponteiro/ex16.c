#include <stdio.h>

void fillArray(int size, int *array);
void printArray(int size, int *array);

int main()
{
    int size;

    printf("Entra com o tamanho do array corno: ");
    scanf("%d", &size);

    int array[size];
    fillArray(size, array);
    printArray(size, array);

    return 0;
}

void fillArray(int size, int *array)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("Entre com o termo %d ae corno: ", i + 1);
        scanf("%d", (array + i));
    }
}

void printArray(int size, int *array)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%3d", *(array + i));
    }
    printf("\n");
}