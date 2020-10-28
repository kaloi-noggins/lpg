#include <stdio.h>

int main()
{
    int m[3][3], sum=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&m[i][j]);
            sum+=m[i][j];
        }
        
    }

    printf("soma dos elementos: %d\n",sum);
    
    return 0;
}