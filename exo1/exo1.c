#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
  char str[255];
  int i=0;
  int word = 1;
   
  printf("Veuillez saisir une phrase :  ");
  scanf("%[^\n]",str);

 while(str[i] != '\0'){


    if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' )
    {
        if(str[i+1]!= '\0'){
        word++;
        }
    } 
    i++;
  }  
  printf("La taille de la chaine de caractere est de : %d , le nombre total de mots dans la phase est de : %d",strlen(str), word);
    
  return 0;
}