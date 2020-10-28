#include <stdio.h>
#include <math.h>

int converte(int horas, int minutos, int segundos);

int main()
{
    int horas, minutos, segundos;

    printf("Entre com uma horario:\nFormato: hh mm ss\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    printf("Horario dado, em segundos: %ds\n", converte(horas, minutos, segundos));

    return 0;
}

int converte(int horas, int minutos, int segundos)
{
    minutos+=horas*60;
    segundos+=minutos*60;
    return segundos;
}