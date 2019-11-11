#include<stdio.h>

int verificar(int num)
{
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return 0;
    }

    else
    {
        return -1;
    }
}

int soma(int num1, int num2, int total,int i,int cont,int valor)
{
    i=0;
    total=0;
    valor=num1;
    cont=num2-num1;
    while (i<cont-1)
    {
        valor++;
        total=total+valor;
        i++;
        printf("Repeticao: %i\nTotal: %i \n",i,total);
    }

    return total;
}

int main ()
{
    int valor,retorno,num1,num2,total;
    float num;

    printf("Digite um numero: \n");
    scanf("%f",&num);

    verificar(num);
    printf("retorno: %d\n", verificar(num) );

    if (verificar(num)>0)
    {
        printf("Digite dois numeros: \n");
        scanf("%i%i",&num1,&num2);
        valor = soma(num1,num2,0,0,0,0);
        printf("soma dos numeros entre os valores: %d\n", valor );
    }


    return 0;
}
