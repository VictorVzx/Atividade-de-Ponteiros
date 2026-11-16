#include <stdio.h>

#define TAM 5

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void ordenar(int *vet, int tam){
    // selection sort
    for(int i = 0; i < tam - 1; i++){
        int *menor = (vet + i);

        for(int j = i+1; j < tam; j++){
            if(*(vet + j) < *menor){
                menor = (vet + j);
            }
        }

        swap((vet + i), menor);
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