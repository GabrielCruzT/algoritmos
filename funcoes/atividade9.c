#include<stdio.h>

int main()
{
    int i,num;
    printf("Digite o tamanho da linha: ");
    scanf("%i",&num);
    for(i=0;i<num;i++)
    {
        desenhaLinha();
    }
    return 0;
}

void desenhaLinha()
{
    printf("=");
}
