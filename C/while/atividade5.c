#include<stdio.h>

int main()
{
    int num,saida=0;

    printf("Digite um numero maior do que 1: \n");
    scanf("%i",&num);

    if (num%2!=0 && num%3!=0 && num%5!=0)
    {
       printf("O numero digitado e primo! \n");
    }
    else
    {
        printf("O numero digitado nao e primo!");
    }

    return 0;
}
