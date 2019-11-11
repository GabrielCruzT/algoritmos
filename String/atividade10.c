#include<stdio.h>

int main()
{
    char nome[20];
    int i,t;
    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);
    t=strlen(nome);
    for(i=t-1;i>=0;i--)
    {
        printf("%c",nome[i]);
    }
}
