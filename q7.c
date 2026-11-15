#include <stdio.h>

#define TAM 4

void somaInversa(int *vet, int tam){
    int i = tam - 2,         \
    soma = *(vet + (tam-1));

    while(i >= 0){
        soma += *(vet + i);
        *(vet + i) = soma;
        
        i--;
    }
}

int main(){
    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", (vetor + i));
    }

    printf("Antes: \n");
    for(int i = 0; i < TAM; i++){
        printf("%d ", *(vetor + i));
    }

    somaInversa(vetor, TAM);

    printf("\nDepois: \n");
    for(int i = 0; i < TAM; i++){
        printf("%d ", *(vetor + i));
    }

    return 0;
}