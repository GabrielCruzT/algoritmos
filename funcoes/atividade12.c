#include<stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    printf("O fatorial quadruplo do numero %i e = %i \n",num,quadruploF(num));
    return 0;
}

int quadruploF(int num)
{
    int num1,i,num2;
    num1=num;
    num2=num;
    for(i=2*num-1;i>=1;i--)
    {
        num1=(2*num1)*i;
        num=num*i;
    }

    return num;
}
