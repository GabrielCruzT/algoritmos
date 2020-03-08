#include<stdio.h>

int main ()
{
    float nota1,nota2,media;

    printf("Notas validas sao de 0 a 10! \n");
    printf("Digite duas notas: \n");
    scanf("%f%f",&nota1,&nota2);

    media=(nota1+nota2)/2;

    if (nota1>=0 && nota1<=10 && nota2>=0 && nota2<=10)
    {
        printf("A media das notas e: %.2f",media);
    }
    else
    {
        printf("Notas invalidas");
    }
    return 0;
}
