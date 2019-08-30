#include<stdio.h>


int main()
{
   int num,divisores=0,saida=0,resultado;

   printf("Digite o valor de um numero: \n");
   scanf("%i",&num);

   printf("Os divisores do numero escolhido sao: \n");

   while (divisores < num)
   {
       divisores++;
       resultado=num%divisores;
       if(resultado==0)
       {
           printf("%i\n",divisores);
       }
   }

    return 0;
}
