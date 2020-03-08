#include<stdio.h>

int main()
{
    int ano;

    printf("Digite o ano: \n");
    scanf("%i",&ano);

    if (ano%400 == 0)
    {
        printf("O ano e bissexto!");
    }
    else
    {
        printf("O ano nao e bissexto");
    }

    return 0;
}
