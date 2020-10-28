//Aluno: Kalyl Henings
#include <stdio_ext.h> //por causa do __fpurge() para strings
#include <stdlib.h>

//tamanho da lista de funcionarios
#define size 4

typedef struct
{
    char nome[35];
    float salario;
    int idade;
    int sexo;
} Funcionario;

void getData(Funcionario *listaFunc)
{
    for (size_t i = 0; i < size; i++)
    {
        system("clear");

        printf("Nome do funcionario %ld: ", i + 1);
        __fpurge(stdin);
        fgets(listaFunc[i].nome, 35, stdin);

        printf("Salario do funcionario %ld: ", i + 1);
        scanf("%f", &listaFunc[i].salario);

        printf("Idade do funcionario %ld: ", i + 1);
        scanf("%d", &listaFunc[i].idade);

        printf("Sexo do funcionario %ld(1 - Masculino, 2 - Feminino): ", i + 1);
        scanf("%d", &listaFunc[i].sexo);
    }
}

void salario(Funcionario *listaFunc)
{
    float maior, sum;
    for (size_t i = 0; i < size; i++)
    {
        sum = sum + listaFunc[i].salario;
        if (i == 0)
        {
            maior = listaFunc[i].salario;
        }
        else
        {
            if (listaFunc[i].salario > maior)
            {
                maior = listaFunc[i].salario;
            }
        }
    }

    printf("Maior salário: %f\n", maior);
    printf("Média salarial: %f\n", sum / size);
}

void idadeSexo(Funcionario *listaFunc)
{
    int sum = 0, m = 0, f = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum = sum + listaFunc[i].idade;
        if (listaFunc[i].sexo == 1)
        {
            m++;
        }
        else
        {
            f++;
        }
    }

    printf("Média de idade: %d\n", sum / size);
    printf("Número de funcionários do sexo masculino: %d\n", m);
    printf("Número de funcionários do sexo femininio: %d\n", f);
}

int main()
{
    Funcionario listaFunc[size];
    getData(listaFunc);

    system("clear");

    salario(listaFunc);
    printf("\n");
    idadeSexo(listaFunc);
    return 0;
}