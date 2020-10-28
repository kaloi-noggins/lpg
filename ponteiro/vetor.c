#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void fill(int *arr, int size);
void out(int *arr, int size);

int main()
{
    int size;

    printf("Entra com o tamanho do array corno: ");
    scanf("%d", &size);

    int arr[size];

    fill(arr, size);
    out(arr, size);

    return 0;
}

void fill(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void out(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}