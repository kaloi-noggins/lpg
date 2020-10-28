#include <stdio.h>

void printData(int dia,int mes,int ano);

int main()
{
    int dia,mes,ano;
    
    printf("Entre com uma data qualquer\nFormato: dd mm aaaa\nEx: 01 01 1900\n");
    scanf("%d %d %d",&dia,&mes,&ano);
    printData(dia,mes,ano);
    return 0;
}

void printData(int dia,int mes,int ano)
{
    printf("%d/%d/%d\n",dia,mes,ano);
}