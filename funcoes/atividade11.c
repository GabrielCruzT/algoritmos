#include<stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    printf("O fatorial duplo do numero %i e = %i \n",num,duploF(num));
    return 0;
}

int duploF(int num)
{
    int i,num1;
    num1=num;
    for (i=1;i<num;i=i+2)
    {
        num1=num1*i;
    }
    return num1;
}
