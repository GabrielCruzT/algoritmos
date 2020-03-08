#include<stdio.h>

int main()
{
    int num1, num2;
    printf("digite dois numeros:");
    scanf("%i%i",&num1,&num2);
    troque(num1,num2);
    return 0;
}

void troque (num1,num2)
{
    int n1,n2;
    n1=num2;
    n2=num1;
    printf("%i ; %i",n1,n2);
}
