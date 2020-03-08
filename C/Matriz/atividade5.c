#include<stdio.h>
#define n 3
void preenche (int m[n][n]);
//void conta (int m[n][n]);
//void imprime (int m[n][n]);
int main()
{
    int i,j,m[n][n];
    preenche (m);
    return 0;
}

void preenche (int m[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            m[i][j]=i*j;
            printf("%i",m[i][j]);
        }
        printf("\n");
    }
}
