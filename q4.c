#include <stdio.h>
#include <string.h>

void removerVogais(char *entrada, char* saida){
    int j = 0;
    for(int i = 0; i < strlen(entrada); i++){

        if(*(entrada + i) != 'a' && *(entrada + i) != 'e' && *(entrada + i) != 'i' && *(entrada + i) != 'o' && *(entrada + i) != 'u'){
            *(saida + j) = *(entrada + i);
            j++;
        }
    }
    *(saida+j) = '\0';
}

int main(){
    char frase[100];
    char nova[100];

    printf("Digite uma frase: ");
    scanf("%99[^\n]", frase);

    removerVogais(frase, nova);

    printf("%s", nova);

    return 0;
}