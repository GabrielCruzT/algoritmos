#include<stdio.h>

int main()
{
    char string[20];
    printf("Digite uma palavra: \n");
    fgets(string,sizeof(string),stdin);
    printf("A palavra digitada e: %s \n",string);
    return 0;
}
