#include <stdio.h>

int m1[3][3], m2[3][3];

void multiplica(int n);
void somatorioA();
void somatorioB();
void maior();
void multiplicaMatriz();
void checaSimetria();
void determinante();

int main()
{

    printf("Entre com os termos da matriz A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Entre com os termos da matriz B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("1 - Multiplicacao da matriz A por constante qualquer\n");
    printf("2 - Somatorio de cada uma das linhas da matriz A\n");
    printf("3 - Somatorio de cada uma das linhas da matriz B\n");
    printf("4 - Maior elemento de A\n");
    printf("5 - Multiplicacao de A por B\n");
    printf("6 - Checar simetria de A\n");
    printf("7 - Calcular o determinante de A\n");
    int opcao = 0;
    scanf("%d", &opcao);

    int n;
    switch (opcao)
    {
    case 1:
        printf("Entre com um numero: ");
        scanf("%d", &n);
        multiplica(n);
        break;
    case 2:
        somatorioA();
        break;
    case 3:
        somatorioB();
        break;
    case 4:
        maior();
        break;
    case 5:
        multiplicaMatriz();
        break;
    case 6:
        checaSimetria();
        break;
    case 7:
        determinante();
        break;
    default:
        return -1;
        break;
    }
    return 0;
}

void multiplica(int n)
{
    int temp[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = n * m1[i][j];
        }
    }

    printf("Matriz multiplicada por %i\n", n);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5i", temp[i][j]);
        }
        printf("\n");
    }
}

void somatorioA()
{
    int sum[3];
    for (int i = 0; i < 3; i++)
    {
        sum[i] = m1[i][0] + m1[i][1] + m1[i][2];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Soma da linha %d de A: %d\n", i + 1, sum[i]);
    }
}

void somatorioB()
{
    int sum[3];
    for (int i = 0; i < 3; i++)
    {
        sum[i] = m1[0][i] + m1[1][i] + m1[2][i];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Soma da coluna %d de A: %d\n", i + 1, sum[i]);
    }
}

void maior()
{
    int maior;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 && j == 0)
            {
                maior = m1[i][j];
            }
            else if (m1[i][j] > maior)
            {
                maior = m1[i][j];
            }
        }
    }

    printf("Maior elemento de  A: %d\n", maior);
}

void multiplicaMatriz()
{
    //printf("Multiplication machine broken :(\n");
    int oof[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int m=0;
            for (int k = 0; k < 3; k++)
            {
                m+=m1[i][k]*m2[k][j];
            }
            oof[i][j] = m;
        }
    }

    printf("Resultado da multiplicacao:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",oof[i][j]);
        }
        printf("\n");
    }
    
}

void checaSimetria()
{
    printf("Simetry machine broken :(\n");
}

void determinante()
{
    printf("S\n");
}