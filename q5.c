#include <stdio.h>

void invertePalavras(char *frase){
    int i = 0, inicio = 0, fim = -1;

    while(*(frase + i) != '\0'){
        if(*(frase + i) != ' '){
            if(*(frase + i+1) == ' ' || *(frase + i+1) == '\0'){
                fim = i;
            }
            if(*(frase + (i-1)) == ' '){
                inicio = i;
            }
        }

        if(fim != -1){
            while(inicio < fim){
                char aux = *(frase + inicio);
                *(frase + inicio) = *(frase + fim);
                *(frase + fim) = aux;
                inicio++;
                fim--;
            }
            inicio = 0;
            fim = -1;
        }
        i++;
    }

}

int main(){
    char frase[100];
    
    printf("Digite uma frase: ");
    scanf("%99[^\n]", frase);

    invertePalavras(frase);

    printf("%s", frase);

    return 0;
}