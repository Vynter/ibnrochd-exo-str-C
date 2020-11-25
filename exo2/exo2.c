#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int lire(char *str){
    printf("Veuillez saisir une chaine de caractere :\n");
    scanf("%[^\n]",str);
    return 0;
}


int reverse(char *str){
    char newTab[255];
    int k=strlen(str);
    int j = 0;

    
    
    for(int i=k-1;i>=0;i--){
        newTab[j]=str[i];
        j++;
    }
    newTab[k] = '\0';

    strcpy(str,newTab);
    return 0;
    
}

int affiche(char *str){
    printf("%s",str);
    return 0;
}



int main(){
     char* str;
     int strSize=255;
    
    str = malloc((strSize+1)*sizeof(char));

    lire(str);

    reverse(str);

    strSize=strlen(str);
    str = (char*)realloc(str,(strSize)*sizeof(char));


    affiche(str);

    free(str);
    return 0;
}