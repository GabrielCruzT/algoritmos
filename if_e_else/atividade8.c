#include<stdio.h>

int main ()
{
    int faltas;
    float nota;

    printf("Digite o numero de faltas do aluno: ");
    scanf("%i",&faltas);
    printf("Digite a nota do aluno: ");
    scanf("%f",&nota);

    if(nota>=9)
    {
        if(faltas<=20)
        {
            printf("Conceito: A");
        }
        else if(faltas>20)
        {
            printf("Conceito: B");
        }
    }
    if(nota>=7.5 && nota<=8.9)
    {
        if(faltas<=20)
        {
            printf("Conceito: B");
        }
        else if(faltas>20)
        {
            printf("Conceito: C");
        }
    }
    if(nota>=5 && nota<=7.4)
    {
        if(faltas<=20)
        {
            printf("Conceito: C");
        }
        else if(faltas>20)
        {
            printf("Conceito: D");
        }
    }
    if(nota>=4 && nota<=4.9)
    {
        if(faltas<=20)
        {
            printf("Conceito: D");
        }
        else if(faltas>20)
        {
            printf("Conceito: E");
        }
    }
    if (nota>=0 && nota<=3.9)
    {
        printf("Conceito: E");
    }
}
