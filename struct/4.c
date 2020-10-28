#include <stdio.h>
#include <stdlib.h>

#define size 2
struct alunos
{
    char nome[100];
    int idade;
    char sexo[100];
    double altura;
};

int main()
{
    struct alunos aluno[size];
    double maisVelho, maiorAltura;
    int iterVelho, iterAltura;

    for (size_t i = 0; i < size; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        fgets(aluno[i].nome, 100 , stdin);
        fpurge(stdin);
        
        printf("Idade do aluno %d: ", i + 1);
        scanf("%i", &aluno[i].idade);
        
        printf("Sexo do aluno[m ou f] %d: ", i + 1);
        fgets(aluno[i].sexo, 100, stdin);
        fpurge(stdin);
        
        printf("Altura do aluno %d: ", i + 1);
        scanf("%lf", &aluno[i].altura);
        if (i == 0)
        {
            maisVelho = aluno[i].idade;
            iterVelho = i;
            maiorAltura = aluno[i].altura;
            iterAltura = i;
        }
        else
        {
            if (aluno[i].idade > maisVelho)
            {
                maisVelho = aluno[i].idade;
                iterVelho = i;
            }
            if (aluno[i].altura > maiorAltura)
            {
                maiorAltura = aluno[i].altura;
                iterAltura = i;
            }
        }
    }

    printf("Nome do aluno mais alto e altura: %d %.0lf\n", aluno[iterAltura].nome, maiorAltura);
    printf("Nome do aluno mais velho e idade: %d %.0lf\n", aluno[iterVelho].nome, maisVelho);
}
