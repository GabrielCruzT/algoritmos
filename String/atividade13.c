#include<stdio.h>>

int main()
{
    char palavra[50];
    int i,t;

    printf("Digite uma palavra: ");
    fgets(palavra,sizeof(palavra),stdin);

    t = strlen(palavra);
    for(i=0;i<t-1;i++)
    {
        palavra[i]+=1;
        printf("%c",palavra[i]);
    }
}
