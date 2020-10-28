#include <stdio.h>
#include<stdlib.h>

long double fat(long double n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%.0llf\n",fat(n));
    return 0;
}

long double fat(long double n)
{
    if(n==0)
    {
        return 1;
    }else
    {
        return n * fat(n-1);
    }
}