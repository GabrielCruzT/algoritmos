#include<stdio.h>

int main()
{
    int num;
    int total=0,i,num2=1;
    printf("Digite um numero: ");
    scanf("%i",&num);
    somatorio(num);
    return 0;
}

void somatorio (num)
{
    int total=0,i,num2=1;
    for(i=0;i<num;i++)
    {
        total=num2+total;
        num2++;
        printf("%i\n",total);
    }
    printf("o somatorio de %i e: %i",num,total);
}
