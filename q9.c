#include <stdio.h>

#define TAM 4

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void ordenar(int *vet, int tam){
    int *pivot = vet;

    for(int i = 1; i < tam; i++){
        if(*(vet + i) < *pivot){
            swap((vet + i), pivot);
        }
        pivot++;
    }

}

int main(){
    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        printf("digite o %dº: ", i+1);
        scanf("%d", (vetor + i));
    }

    printf("Antes: \n");
    for(int i = 0; i < TAM; i++){
        printf("%d", *(vetor + i));
    }

    ordenar(vetor, TAM);

    printf("\nDepois: \n");
    for(int i = 0; i < TAM; i++){
        printf("%d", *(vetor + i));
    }

    return 0;
}