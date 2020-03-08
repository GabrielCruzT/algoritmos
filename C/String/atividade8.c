#include<stdio.h>

int main ()
{
    char nome[20],sexo[20];
    int idade;

    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);
    printf("Digite um sexo: ");
    fgets(sexo,sizeof(sexo),stdin);
    fflush(stdin);
    printf("Digite uma idade: ");
    scanf("%i",&idade);

    if(sexo[0] == 'f' || sexo[0] == 'F' && idade < 25)
    {
        printf("Aceita!\n");
    }
    else
    {
        printf("Nao Aceita!\n");
    }
    return 0;
}
