#include<stdio.h>

int main ()
{
    int dia,mes,ano;

    printf("Digite um dia do ano: \n");
    scanf("%i",&dia);
    printf("Digite um mes do ano: \n");
    scanf("%i",&mes);
    printf("Digite um ano: \n");
    scanf("%i",&ano);


    if(dia<=31 && mes>0 && mes<=12)
    {
        if(mes=2 && ano%400 == 0 && dia>29)
        {
            printf("Data invalida! \n");
        }
        else if(mes=2 && ano%400 == 0 && dia<=29)
        {
            printf("Data valida! \n");
        }
        else if(mes=2 && dia <=28 && ano%400 != 0)
        {
            printf("Data valida");
        }
        else if(mes=2 && dia >28 && ano%400 != 0)
        {
            printf("Data invalida");
        }
        else if(dia<=31 && mes>0 && mes<=12 && ano%400 != 0)
        {
            printf("Data valida");
        }
    }
    else
    {
       printf("Data invalida!");
    }

        return 0;
}
