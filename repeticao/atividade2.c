#include<stdio.h>

int main()
{
    int i,op,num1=0,num2,soma=0,quant=0,maior,menor;

    do
    {
        printf("Menu:\n");
        printf("1- A soma dos numeros digitados.\n");
        printf("2- A quantidade dos numeros digitados.\n");
        printf("3- A media dos numeros digitados.\n");
        printf("4- O maior numeros digitado.\n");
        printf("5- O menor numeros digitado.\n");
        printf("6- A media dos numeros pares.\n");
        printf("0- Sair.\n");
        printf("Digite o numero da opcao escolhida:\n");
        scanf("%i",&i);

    }while(i<1 || i>6);

    printf("Digite a quantidade de numeros:\n");
    scanf("%i",&num2);

    while (quant<num2)
    {
        soma=num1+soma;
        printf("Digite o numero:\n");
        scanf("%i",&num1);
        quant++;

        if(num1>maior)
            maior=num1;
        else if(num1<menor)
            menor=num1;
        else if (num1%2==0)


    }

    switch (i)
    {
        case(1):
            {
               printf("A soma dos numeros e: %i\n",soma);
            }
        case (2):
            {
                printf("A quantidade de numeros e: %i\n",num2);
            }
        case(3):
            {
                op=soma/num2;
                printf("A media dos numeros e: %i\n",op);
            }
        case(4):
            {
                printf("O maior valor digitado = %i \n",maior);
            }
        case (5):
            {
                printf("O menor valor digitado = %i \n",maior);
            }
        case (6):
            {
                if()
            }
        case(0):
            {
                break;
            }



    }

    return 0;
}
