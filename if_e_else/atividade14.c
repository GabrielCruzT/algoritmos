#include<stdio.h>

int main ()
{
    int soma,acertos=0,total,num1,num2,num3,num4,num5;
    num1=4;
    num2=15;
    num3=25;
    num4=69;
    num5=80;

    printf("Prova de matematica: \n");
    printf("Cada questao vale 1 ponto: \n");
    printf("Questao 1: quanto e %i + %i? \n",num1,num2);
    scanf("%i",&soma);
    if (soma==num1+num2)
    {
        printf("Parabens voce acertou!\n");
        acertos ++;
    }
    else
    {
        soma=num1+num2;
        printf("Voce errou! Resposta correta e: %i\n",soma);
    }
    printf("Questao 2: quanto e %i + %i? \n",num3,num4);
    scanf("%i",&soma);
    if (soma==num3+num4)
    {
        printf("Parabens voce acertou!\n");
        acertos ++;
    }
    else
    {
        soma=num3+num4;
        printf("Voce errou! Resposta correta e: %i\n",soma);
    }
    printf("Questao 3: quanto e %i + %i? \n",num5,num1);
    scanf("%i",&soma);
    if (soma==num5+num1)
    {
        printf("Parabens voce acertou!\n");
        acertos ++;
    }
    else
    {
        soma=num5+num1;
        printf("Voce errou! Resposta correta e: %i\n",soma);
    }
    printf("Questao 4: quanto e %i + %i? \n",num3,num5);
    scanf("%i",&soma);
    if (soma==num3+num5)
    {
        printf("Parabens voce acertou!\n");
        acertos ++;
    }
    else
    {
        soma=num3+num5;
        printf("Voce errou! Resposta correta e: %i\n",soma);
    }
    printf("Questao 5: quanto e %i + %i? \n",num2,num4);
    scanf("%i",&soma);
    if (soma==num2+num4)
    {
        printf("Parabens voce acertou!\n");
        acertos ++;
    }
    else
    {
        soma=num2+num4;
        printf("Voce errou! Resposta correta e: %i\n",soma);
    }
    printf("Total de pontos:%i\n",acertos);



   return 0;
}
