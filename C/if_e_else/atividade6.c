#include<stdio.h>

int main()
{
    int a,resultado,resultado1;

    printf("Digite um numero inteiro: \n");
    scanf("%i",&a);

    resultado=a/3;
    resultado1=a/5;


    if(a%3==0)
    {

        printf("o numero e divisivel por 3! resultado: %i",resultado);
    }
    else if (a%5==0)
    {

        printf("o numero e divisivel por 5! resultado: %i",resultado1);
    }
    else
    {
        printf("o numero nao e divisivel por 3 nem por 5!");
    }

    return 0;
}
