#include<stdio.h>

int main()
{
    float nota1,nota2,nota3,media;

    printf("Digite as tres notas referentes ao Trabalho de laboratório, Avaliação Semestral e Exame Final");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    media=((nota1*2)+(nota2*3)+(nota3*5))/3;

    if (media>5)
    {
        printf("Voce foi aprovado!");
    }
    else if (media>3 && media<4.9)
    {
        printf("Voce esta de recuperacao!");
    }
    else
    {
        printf("Voce foi reprovado!");
    }
    return 0;
}
