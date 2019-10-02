#include<stdio.h>

int main ()
{
    int num;
    printf("Digite um numero:");
    scanf("%i",&num);
    fatorial(num);
    return 0;
}

void fatorial (num)
{
    int i,num1;
    num1=num;

    for(i=num-1;i>=1;i--)
    {
        num=num*i;
    }
    printf("O valor do fatorial de %i e = %i",num1,num);
}
