#include <stdlib.h>
#include <stdio.h>
int main()
{
    int id;
    char texto[20], nome[30];
    float h;
    FILE *f;
    if ((f = fopen("C:\\Omir\\exelpg.txt", "r")) == NULL)
    {
        printf("ARQUIVONAOPODESERALBERTO\n");
        return (1);
    }
    else
    {
        fflush(stdin);
        fscanf(f, "%s%s", texto, nome);
        printf("%s%s\n", texto, nome);
        fflush(stdin);
        fscanf(f, "%s%d\n", texto, &id);
        printf("%s%d\n", texto, id);
        fflush(stdin);
        fscanf(f, "%s%f", texto, &h);
        printf("%s%f\n", texto, h);
    }
    int fclose(FILE * f);
    system("pause");
    return 0;
}