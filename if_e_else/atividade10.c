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
        if(antigo>=72.74)
        {
            calculo=(antigo*1.1);
            printf("normal: %0.2f",calculo);
        }
    }
    && antigo<=104.35

    return 0;
}
