#include<stdio.h>
void preenche(int vet[]);
void imprime(int vet[]);
int main()
{
    int vet[10],i;
    preenche(vet);
    imprime(vet);
    return 0;
}

void preenche(int vet[])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%i",&vet[i]);
    }
}

void imprime(int vet[])
{
    int i,maior,imaior;
    maior = vet[0];
    for(i=0;i<10;i++)
    {
        printf("Valor do vetor %i: %i\n",i,vet[i]);
        if(vet[i]>maior)
        {
            maior = vet[i];
            imaior=i;
        }
    }
    printf("O valor do maior vetor e %i, e a sua posicao e no vetor %i\n",maior,imaior);
}

