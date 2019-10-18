#include<stdio.h>
#define n 4
void matrizA (int a[n][n]);
void matrizB (int b[n][n]);
void matrizC (int c[n][n],int a[n][n],int b[n][n]);
int main()
{
    int a[n][n],b[n][n],c[n][n];
    matrizA (a);
    matrizB (b);
    matrizC (c,a,b);
    return 0;
}

void matrizA (int a[n][n])
{
    int i,j;
    printf("Matriz A \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Digite o valor da linha %i e coluna %i: ",i,j);
            scanf("%i",&a[i][j]);
        }
    }
}

void matrizB (int b[n][n])
{
    int i,j;
    printf("Matriz B \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Digite o valor da linha %i e coluna %i: ",i,j);
            scanf("%i",&b[i][j]);
        }
    }
}

void matrizC (int c[n][n],int a[n][n],int b[n][n])
{
    int i,j;
    printf("Matriz C \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
           if (a[i][j]>=b[i][j])
           {
               c[i][j]=a[i][j];
           }
           else
           {
               c[i][j]=b[i][j];
           }
           printf("C[%i][%i] = %i \n",i,j,c[i][j]);
        }
    }
}
