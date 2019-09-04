#include<stdio.h>

int main()
{
    int num1, maior=0,menor=999,quant=0,soma=0,quant1=0,soma1=0;
    float media,media1;
    while(num1>0)
    {
        printf("Digite um numero: \n");
        scanf("%i",&num1);

        if(num1>maior)
            maior=num1;
        if(num1<menor)
            menor=num1;
        if(num1%2==0)
        {
            quant1++;
            soma1=num1+soma1;
            media1=soma1/quant1;
            quant1++;
        }
        quant++;
        soma=num1+soma;
        media=soma/quant;
    }
    printf("A soma dos numeros digitados = %i \n",soma);
    printf("A quantidade de numeros digitados = %i \n",quant);
    printf("A media dos numeros digitados = %.2f \n",media);
    printf("O maior valor digitado = %i \n",maior);
    printf("O menor valor digitado = %i \n",menor);
    printf("A media dos numeros pares = %.2f \n",media1);
    return 0;
}
