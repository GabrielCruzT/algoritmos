#include<stdio.h>
#include<string.h>
int main()
{
    char string1 [20]="Brasil";
    char string2 [5]="ABC";
    int i,t;
    for (i=0;i<strlen(string1);i++)
    {
        string2[i]= string1[i];
    }
    string2[i]='\0';
    printf("O valor da string2 e: %s",string2);
}
