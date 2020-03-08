#include<stdio.h>
#define n 5
void preenche (int m[n][n]);
void procura (int m[n][n]);
int main ()
{
    int m[n][n];
    preenche (m);
    procura (m);
    return 0;
}

void preenche (int m[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Digite o valor da linha %i e coluna %i: ",i,j);
            scanf("%i",&m[i][j]);
        }
    }
}

void procura(int m[n][n])
{
    int i,j,p,lin,col,achou;
    printf("Digite o valor a ser procurado: ");
    scanf("%i",&p);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (m[i][j] == p)
            {
                achou = 1;
                col = j;
                lin = i;
            }
        }
    }
    if (achou == 1)
    {
        printf("A posicao do valor procurado e M[%i][%i]",lin,col);
    }
    else
    {
        printf("Valor nao encontrado!");
    }

}
