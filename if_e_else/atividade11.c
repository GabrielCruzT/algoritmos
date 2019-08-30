#include<stdio.h>

int main()
{
    float venda,comissao;

    printf("Digite o valor da venda: \n");
    scanf("%f",&venda);

    if(venda>=100000.00)
    {
        comissao=(venda*1.16)+700;
        printf("O valor da venda e: %f \n",comissao);
    }
    else if(venda<100000.00 && venda>=80000.00)
    {
        comissao=(venda*1.14)+650;
        printf("O valor da venda e: %f \n",comissao);
    }
    else if(venda<80000.00 && venda>=60000.00)
    {
        comissao=(venda*1.14)+600;
        printf("O valor da venda e: %f \n",comissao);
    }
    else if(venda<60000.00 && venda>=40000.00)
    {
        comissao=(venda*1.14)+550;
        printf("O valor da venda e: %f \n",comissao);
    }
    else if(venda<40000.00 && venda>=20000.00)
    {
        comissao=(venda*1.14)+500;
        printf("O valor da venda e: %f \n",comissao);
    }
    else if(venda<20000.00)
    {
        comissao=(venda*1.14)+400;
        printf("O valor da venda e: %f \n",comissao);
    }

    return 0;
}
