#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tamanho da agenda
#define size 2

struct end
{
    char rua[100];
    int numero;
    char complemento[100];
    char bairro[100];
    int cep;
    char cidade[100];
    char estado[100];
    char pais[100];
};

struct tel
{
    int ddd;
    int numero;
};

struct aniver
{
    int dia;
    int mes;
    int ano;
};

struct contato
{
    char nome[100];
    char sobrenome[100];
    char email[100];
    struct tel telefone;
    struct end endereco;
    struct aniver aniversario;
    char obs[500];
};

//printa todas as opções do menu
void menu(int *opt);
//busca contatos com determinado nome e printa todas as ocorrência
void buscaPorPrimeiroNome(struct contato *agenda, char *nome);
//busca contatos por dia ou dia e mes do aniversário e printa todas as ocorrencias
void buscaPorAniversario(struct contato *agenda, int dia, int mes);
//insere um novo contato
void insereContato(struct contato *agenda, int *lastIterator);
//remove um contato com base no nome e sobenome
void removeContao(struct contato *agenda, char nome[100], char sobrenome[100], int *lastIterator);
//organiza a agenda em ordem alfabética
void organizaAgenda(struct contato *agenda);
//mostra ou todas as informaões ou nome, sobrenome, email e aniversário de todos os contatos
void mostrar(struct contato *agenda, int opt);

int main()
{
    struct contato agenda[size];
    int opt = 0, d, m, lastIterator = 0;
    char n[100], s[100];
    do
    {
        menu(&opt);

        switch (opt)
        {
        case 1:
            insereContato(agenda, &lastIterator);
            break;
        case 2:
            printf("Entre com o nome e sobrenome do contato a ser removido: ");
            scanf("%s %[^\n]s", &n, &s);
            removeContao(agenda, n, s, &lastIterator);
            break;
        case 3:
            mostrar(agenda, 1);
            break;
        case 4:
            mostrar(agenda, 2);
            break;
        case 5:
            printf("Entre com o o primeiro nome do contato: ");
            scanf("%s", &n);
            buscaPorPrimeiroNome(agenda, n);
            break;
        case 6:
            printf("Entre com o dia do aniversário: ");
            scanf("%d", &d);
            buscaPorAniversario(agenda, d, -1);
            break;
        case 7:
            printf("Entre com o dia e mês do aniversário: ");
            scanf("%d", &d);
            buscaPorAniversario(agenda, d, m);
            break;
        case 8:
            printf("Adios! Vou apagar tudo teus contato kkkjk\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
        break;
    } while (opt != 8);
    return 0;
}

void menu(int *opt)
{
    printf("Agenda de contatos:\n");
    printf("1 - Inserir contato\n");
    printf("2 - Remover contato\n");
    printf("3 - Mostrar nome, telefone e email de todos os contatos\n");
    printf("4 - Mostrar todos os dados de todos os contatos\n");
    printf("5 - Buscar contato por primeiro nome\n");
    printf("6 - Buscar contato por dia do aniversário\n");
    printf("7 - Buscar contato por dia e mês do aniversário\n");
    printf("8 - Sair\n");
    printf("Entre com um opção: ");
    scanf("%d", opt);
}

void buscaPorPrimeiroNome(struct contato *agenda, char *nome)
{
}

void buscaPorAniversario(struct contato *agenda, int dia, int mes)
{
}

void insereContato(struct contato *agenda, int *lastIterator)
{
    printf("Nome: ");
    scanf("%[^\n]s", agenda[*lastIterator].nome);
    printf("\n");

    printf("Sobrenome: ");
    scanf("%[^\n]s", agenda[*lastIterator].sobrenome);
    printf("\n");

    printf("Email: ");
    scanf("%[^\n]s", agenda[*lastIterator].email);
    printf("\n");

    printf("Telefone\n");
    printf("   DDD: ");
    scanf("%d", agenda[*lastIterator].telefone.ddd);
    printf("\n");
    printf("   Número: ");
    scanf("%d", agenda[*lastIterator].telefone.numero);
    printf("\n");

    scanf("Endereco\n");
    printf("\n");
    printf("   Rua: ");
    scanf("%[^\n]s", agenda[*lastIterator].endereco.rua);
    printf("\n");
    printf("   Número: ");
    scanf("%d", agenda[*lastIterator].endereco.numero);
    printf("\n");
    printf("   Complemento: ");
    scanf("%[^\n]s", agenda[*lastIterator].endereco.complemento);
    printf("\n");
    printf("   Cidade: ");
    scanf("%[^\n]s", agenda[*lastIterator].endereco.cidade);
    printf("\n");
    printf("   Estado: ");
    scanf("%[^\n]s", agenda[*lastIterator].endereco.estado);
    printf("\n");
    printf("   País: ");
    scanf("%[^\n]s", agenda[*lastIterator].endereco.pais);
    printf("\n");
    printf("   CEP: ");
    scanf("%d", agenda[*lastIterator].endereco.cep);
    printf("\n");

    scanf("Data de aniversário\n");
    printf("\n");
    printf("   Dia: ");
    scanf("%d", agenda[*lastIterator].aniversario.dia);
    printf("\n");
    printf("   Mês: ");
    scanf("%d", agenda[*lastIterator].aniversario.mes);
    printf("\n");
    printf("   Ano: ");
    scanf("%d", agenda[*lastIterator].aniversario.ano);
    printf("\n");

    printf("Observações\n");
    scanf("%[^\n]s", agenda[*lastIterator].obs);
    printf("\n");
}

void removeContao(struct contato *agenda, char nome[100], char sobrenome[100], int *lastIterator)
{
}

void organizaAgenda(struct contato *agenda)
{
}
/*
void mostrar(struct contato *agenda, int opt)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Sobrenome: %s\n", agenda[i].sobrenome);
        printf("Email: %d \n", agenda[i].email);
        printf("Telefone: %d %d\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);

        if (opt == 2)
        {
            printf("Endereco\n");
            printf("  Rua: %s\n", agenda[i].endereco.rua);
            printf("  Número: %d\n", agenda[i].endereco.numero);
            printf("  Complemento: %s\n", agenda[i].endereco.complemento);
            printf("  Cidade: %s\n", agenda[i].endereco.cidade);
            printf("  Estado: %s\n", agenda[i].endereco.estado);
            printf("  País: %s\n", agenda[i].endereco.pais);
            printf("  CEP: %d\n", agenda[i].endereco.cep);

            printf("Data de aniversário: %d/%d/%d\n",
                   agenda[i].aniversario.dia,
                   agenda[i].aniversario.mes,
                   agenda[i].aniversario.ano);

            printf("Observações\n%d\n", agenda[i].obs);
        }
        printf("\n");
    }
}
*/