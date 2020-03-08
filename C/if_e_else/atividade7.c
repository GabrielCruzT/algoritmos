#include<stdio.h>

int main()
{
    int MG,SP,RJ,MS,a;
    float valor,total1,total2,total3,total4;

    MG=0;
    SP=1;
    RJ=2;
    MS=3;

    printf("Estados disponiveis: \n MG-0 \n SP-1\n RJ-2\n MS-3\n");
    printf("Digite o valor correspondente ao estado: ");
    scanf("%i",&a);
    printf("Digite o valor correspondente ao produto: ");
    scanf("%f",&valor);
    total1 = (valor*1.07);
    total2 = (valor*1.12);
    total3 = (valor*1.15);
    total4 = (valor*1.08);

    if(a==0)
    {
        printf("O valor do produto em MG acrescido dos impostos e: %0.2f",total1);
    }
    else if(a==1)
    {
        printf("O valor do produto em SP acrescido dos impostos e: %0.2f",total2);
    }
    else if(a==2)
    {
        printf("O valor do produto no RJ acrescido dos impostos e: %0.2f",total3);
    }
    else if(a==3)
    {
        printf("O valor do produto no MS acrescido dos impostos e: %0.2f",total4);
    }

    else
    {
        printf("Estado escolhido nao esta disponivel!");
    }
    return 0;
}

