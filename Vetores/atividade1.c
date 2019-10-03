#include<stdio.h>
void imprime (float num[]);
int main()
{
    int i;
    float num[5]={0};
    printf("Digite 5 valores: ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&num[i]);
    }
    imprime(num);
    return 0;
}

void imprime(float num[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("valor da nota %i = %.2f \n",i+1,num[i]);
    }
    printf("\n");
}
