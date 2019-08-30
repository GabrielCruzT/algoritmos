#include<stdio.h>

int main ()
{
    int contador,num1,maior=0;


    while(num1>0)
    {
        printf("Digite um numero: \n");
        scanf("%i",&num1);

        if(num1>maior)
        {
            maior=num1;
        }
    }

    if(num1<0)

    {
        printf("O maior valor digitado = %i \n",maior);
    }


    return 0;
}
