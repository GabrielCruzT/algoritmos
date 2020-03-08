#include<stdio.h>
#include<string.h>

int main()
{
    char string[20];
    int i=0;
    printf("Digite uma palavra: \n");
    scanf("%s",string);
    while(string[i]!= '\0')
    {
        i++;
    }
    printf("o comprimento da palavra %s e de %i caracters",string,i);
}
