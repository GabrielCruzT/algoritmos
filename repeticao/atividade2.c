#include<stdio.h>

int main()
{
    int i,op,num1,num2,num3;
    printf("Menu:\n");
    printf("1- A soma dos numeros digitados.\n");
    printf("2- A quantidade dos numeros digitados.\n");
    printf("3- A media dos numeros digitados.\n");
    printf("4- O maior numeros digitado.\n");
    printf("5- O menor numeros digitado.\n");
    printf("6- A media dos numeros pares.\n");
    printf("0- Sair.\n");
    printf("Digite tres numero:\n");
    scanf("%i%i%i",&num1,&num2,&num3);
    printf("Digite o numero da opcao escolhida:\n");
    scanf("%i",&i);


    do
    {
        switch(i)
        {
            case(1):
            {
                op=num1+num2+num3;
                printf("A soma dos numeros e: %i \n",op);
            }
        }

    }while(i<1 || i>6);

    return 0;
}
