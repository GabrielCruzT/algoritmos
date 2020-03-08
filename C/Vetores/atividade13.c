#include <stdio.h>
#define n 5
void preenche (int v[n]);
void codigo (int v[n]);

int main ()
{
    int v[n];
    preenche (v);
    codigo (v);
    return 0;
}

void preenche (int v[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%i",&v[i]);
    }
}

void codigo (int v[n])
{
    int i,j,op,aux=0;
    while (aux==0)
    {
        printf("Digite o codigo: ");
        scanf("%i",&op);
        if(op==0)
        {
            break;
        }
        else if (op==1)
        {
            for(i=0;i<n;i++)
                {
                    printf("%i",v[i]);
                    aux=1;
                }
        }
        else if(op==2)
        {
            for(i=n;i>0;i--)
                {
                    printf("%i",v[i]);
                    aux=1;
                }
        }
        else
        {
            printf("Codigo invalido!\n");
        }
    }

}
