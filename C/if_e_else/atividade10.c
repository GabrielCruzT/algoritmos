#include<stdio.h>

int main()

{
    float antigo,novo,calculo;
    printf("Digite o preco antigo: \n");
    scanf("%f",&antigo);

    if(antigo<=50.00)
    {
        calculo=(antigo*1.05);
        printf("Barato: %0.2f",calculo);
    }
    else if (antigo>50.01 && antigo<=100.00)
    {
        if(antigo>=72.74 && antigo<=100.00)
        {
            calculo=(antigo*1.1);
            printf("normal: %0.2f",calculo);
        }
    }
    else if(antigo>100.1)
    {
        if(antigo<=104.35)
        {
            calculo=(antigo*1.15);
            printf("normal: %0.2f",calculo);
        }
        else if(antigo>104.35 && antigo<=173.92)
        {
            calculo=(antigo*1.15);
            printf("caro: %0.2f",calculo);
        }
        else if(antigo>173.92)
        {
            calculo=(antigo*1.15);
            printf("Muito caro: %0.2f",calculo);
        }

    }

    return 0;
}
