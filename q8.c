#include <stdio.h>

void extrairDominio(char *email, char *destino){
    int i = 0, k = 0;
    int inicio = -1;
    while(*(email + i) != '\0'){
        if(i > 0 && *(email + (i-1)) == '@'){
            inicio = i;
        }
        i++;
    }
    if(inicio != -1){
        while(*(email + inicio) != '\0'){
            *(destino + k) = *(email + inicio++);
            k++;
        }
        *(destino + k) = '\0';
    }

}

int main(){
    char email[100];
    char dominio[50];

    printf("Digite o seu email: ");
    scanf("%99[^\n]", email);

    extrairDominio(email, dominio);

    printf("Dominio do email: %s\n", dominio);

    return 0;
}