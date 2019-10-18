#include <stdio.h>
#define n 5
void matrizA(int a[n][n]);
void matrizB(int b[n][n],int a[n][n]);

int main()
{
    int a[n][n],b[n][n];
    matrizA(a);
    matrizB(b,a);
    return 0;
}

void matrizA(int a[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Digite o valor da linha %i e coluna %i: ",i,j);
            scanf("%i",&a[i][j]);
        }
    }
}

void matrizB(int b[n][n],int a[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            b[i][j]=a[i][j]*a[i][j];
            printf("%i",b[i][j]);
        }
        printf("\n");
    }
}
