#include<stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    printf("Valor do fatorial quadruplo: %i", fatorialQ(num));
    return 0;
}
int fatorialQ(int num)
{
    int fat = 1,i;

    for (i = 1; i <= num; i++)
    {
       fat = fat * i;
    }
    return fat * fatorialQ(num-1);
}
