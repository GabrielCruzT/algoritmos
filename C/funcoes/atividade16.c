#include<stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    linhas(num);
    return 0;
}

void linhas (num)
{
    int n,i;
    for(i=1;i<=num;i++)
    {
        for (n=0;n<i;n++)
        {
            printf("!");
        }
        printf("\n");
    }
}
