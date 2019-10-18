#include<stdio.h>
void preenche(char m[3][5]);
void gabarito (char v[5],char m[3][5]);
void imprime(char v[5], char m[3][5]);
int main()
{
    char m[3][5],v[5];
    gabarito(v,m);
    preenche(m);
    imprime(v,m);
    return 0;
}

void preenche(char m[3][5])
{
    int i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("Digite a resposta da %i questao do %i aluno: ",j+1,i+1);
            scanf("%c",&m[i][j]);
            fflush(stdin);
        }
    }
}

void gabarito(char v[5],char m[3][5])
{
   int i,j;
   for (j=0;j<5;j++)
       {
           printf("Digite as alternativa correta da %i questao:",j+1);
           scanf("%c",&v[j]);
           fflush(stdin);
       }
}


void imprime(char v[5],char m[3][5])
{
    int i,j;
    for (i=0;i<3;i++)
   {
       for (j=0;j<5;j++)
       {
           if(v[j]==m[i][j])
           {
               printf("Aluno %i alternativa %i Certo!\n",i+1,j+1);
           }
           else
           {
               printf("Aluno %i alternativa %i Errado!\n",i+1,j+1);
           }
       }
   }
}

