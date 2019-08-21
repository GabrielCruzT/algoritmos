#include<stdio.h>

int main()
{
    int a,soma;

    printf("Digite um numero inteiro: ");
    scanf("%i",&a);

    soma=(a*3+1)+(a*2-1);

    printf("A soma do sucessor do triplo do numero com o antecessor de seu dobro e: %0.2i",soma);

}
