#include<stdio.h>
#define n 10
void preencheA (int A[n]);
void preencheB (int B[n]);
void total (int A[n], int B[n], int C[n]);
int main()
{
    int A[n],B[n],C[n];
    preencheA(A);
    preencheB(B);
    total(A,B,C);
    return 0;
}

void preencheA(int A[n])
{
    int i;
    printf("Vetor A \n");
    for (i=0;i<n;i++)
    {
        printf("Digite um numero: ");
        scanf("%i",&A[i]);
    }
}

void preencheB(int B[n])
{
    int i;
    printf("Vetor B \n");
    for (i=0;i<n;i++)
    {
        printf("Digite um numero: ");
        scanf("%i",&B[i]);
    }
}

void total(int A[n],int B[n],int C[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        C[i]=A[i]-B[i];
    }
    printf("Subtracao dos vetores A e B\n");
    for (i=0;i<n;i++)
    {
        printf("C[%i] %i\n",i+1,C[i]);
    }
}
