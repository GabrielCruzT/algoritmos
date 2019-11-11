#include<stdio.h>

int main()
{
    int vet[5],i;
    preenche(vet);
    imprime(vet);
    return 0;
}

void imprime (int vet[])
{
    int i;
    for (i=0;i<=4;i++)
    {
        printf("%i\n",vet[i]);
    }
}

void preenche (int vet[])
{
    int i;
    for (i=0;i<=4;i++)
    {
        printf("Digite um numero: ");
        scanf("%i",&vet[i]);
    }
}
