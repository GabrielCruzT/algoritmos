#include<stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    printf("Valor: %i", superfatorial(num));
    return 0;
}
int superfatorial(int num)
{
    int fat = 1,i;

    for (i = 1; i <= num; i++)
    {
       fat = fat * i;
    }
    return fat * superfatorial(num-1);
}
