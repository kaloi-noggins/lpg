#include <stdio.h>
#include<stdlib.h>

unsigned long long int fat(unsigned long long int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%llu\n",fat(n));
    return 0;
}

unsigned long long int fat(unsigned long long int n)
{
    if(n==0)
    {
        return 1;
    }else
    {
        return n * fat(n-1);
    }
}