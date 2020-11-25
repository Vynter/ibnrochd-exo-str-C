#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 
int main()
{
    char str[255];
    char l;
    int count=0;

    printf("Veuillez saisir une chaine de caractere :\n");
    scanf("%[^\n]",str);
    printf("Veuillez saisir une lettre :\n");
    scanf(" %c",&l);
    
    for (int i = 0; i < strlen(str-1); i++)
    {
        if(str[i]==l){
            count++;
        }
    }
    
    printf("le nombre d'occurance de la lettre %c : %d .",l,count);
    return 0;
}