#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    int matricula;
    int tempoServico;
    int idade;
    int sexo;
    int cpf;
    int codSetor;
    int codCargo;
    double salario;
};

//desenvolvedor http kkkk
int main()
{
    int n, sesentoes = 0, maisAntigo, iteradorMaisAntigo, maisFunc;
    double maiorSal, menorSal, sumSal;
    printf("Entre com o número de funcionários: ");
    scanf("%d", &n);

    struct cadastro cad[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &cad[i].matricula);
        scanf("%d", &cad[i].tempoServico);
        scanf("%d", &cad[i].idade);
        scanf("%d", &cad[i].sexo);
        scanf("%d", &cad[i].cpf);
        scanf("%d", &cad[i].codSetor);
        scanf("%d", &cad[i].codCargo);
        scanf("%lf", &cad[i].salario);

        if (i == 0)
        {
            maiorSal = cad[i].salario;
            menorSal = cad[i].salario;
            maisAntigo = cad[i].tempoServico;
            iteradorMaisAntigo = i;
        }
        else
        {
            if (cad[i].salario > maiorSal)
            {
                maiorSal = cad[i].salario;
            }
            if (cad[i].salario < menorSal)
            {
                menorSal = cad[i].salario;
            }
            if (cad[i].tempoServico > maisAntigo)
            {
                maisAntigo = cad[i].tempoServico;
                iteradorMaisAntigo = i;
            }
        }

        if (cad[i].idade > 60)
        {
            sesentoes++;
        }

        sumSal += cad[i].salario;
    }

    int **matrizSetores;
    matrizSetores = calloc(100, sizeof(int *));
    for (size_t i = 0; i < 100; i++)
    {
        *(matrizSetores + i) = calloc(2, sizeof(int));
    }

    for (size_t i = 100; i < 2; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (cad[j].codSetor == i)
            {
                matrizSetores[i][1] += 1;
            }
        }
    }

    for (size_t i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            maisFunc = matrizSetores[i][1];
        }
        else
        {
            if (matrizSetores[i][1] > maisFunc)
            {
                maisFunc = matrizSetores[i][1];
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("Matricula do funcionario %d : %d\n", i + 1, cad[i].matricula);
        printf("Tempo de serviço do funcionario %d : %d\n", i + 1, cad[i].tempoServico);
        printf("Idade do funcionario %d : %d\n", i + 1, cad[i].idade);
        printf("Sexo do funcionario %d : %d\n", i + 1, cad[i].sexo);
        printf("CPF do funcionario %d : %d\n", i + 1, cad[i].cpf);
        printf("Código do setor do funcionario %d : %d\n", i + 1, cad[i].codSetor);
        printf("Código do cargo do funcionario %d : %d\n", i + 1, cad[i].codCargo);
        printf("Salário do funcionario %d : %.2lf\n", i + 1, cad[i].salario);
        printf("\n");
    }

    printf("Maior salário : %.2lf\n", maiorSal);
    printf("Menor salário : %.2lf\n", menorSal);
    printf("Média salarial : %.2lf\n", sumSal / n);
    printf("Número de sessentões : %d\n", sesentoes);
    printf("Setor com mais funcionários : %d\n", maisFunc + 1);
    printf("\n");

    printf("Matricula do funcionario mais antigo : %d\n", cad[iteradorMaisAntigo].matricula);
    printf("Tempo de serviço do funcionario mais antigo : %d\n", cad[iteradorMaisAntigo].tempoServico);
    printf("Idade do funcionario mais antigo : %d\n", cad[iteradorMaisAntigo].idade);
    printf("Sexo do funcionario mais antigo : %d\n", cad[iteradorMaisAntigo].sexo);
    printf("CPF do funcionario mais antigo : %d\n", cad[iteradorMaisAntigo].cpf);
    printf("Código do setor do funcionario mais antigo : %d\n", cad[iteradorMaisAntigo].codSetor);
    printf("Código do cargo do funcionario mais antigo : %d\n", cad[iteradorMaisAntigo].codCargo);
    printf("Salário do funcionario mais antigo : %.2lf\n", cad[iteradorMaisAntigo].salario);
    printf("\n");

    return 0;
}   