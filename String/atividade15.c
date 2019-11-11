#include<stdio.h>

int main()
{
    char palavra[20];

    printf("Digite uma palavra com letras  maiusculas: ");
    fgets(palavra,sizeof(palavra),stdin);

    printf("%s",strlwr(palavra));
    return 0;
}
