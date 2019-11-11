#include<stdio.h>

int main()
{
    char nome[20];
    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);
    if(nome[0]=='a' || nome[0]=='A')
    {
        printf("%s\n",nome);
    }
    else
    {
        printf("Tente novamente!");
    }
    return 0;
}
