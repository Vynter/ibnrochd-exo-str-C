#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int conv(char *str){
    
}

int main(){
    char str[255];
    printf("Veuillez saisir un numero : ");
    scanf("%[0-9]",str);
    int x = atol(str);
    printf(" ''%s'' ===> %d",str,x);
    return 0;
}