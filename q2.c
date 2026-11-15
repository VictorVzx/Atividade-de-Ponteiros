#include <stdio.h>

#define TAM 6

void apontaExtremos(int *vet, int tam, int *maior, int *menor){
    *maior = *vet;
    *menor = *vet;

    int i = 1;

    while(i < tam){
        if(*(vet + i) > *maior){
            *maior = *(vet+i);
        }else if(*(vet + i) < *menor){ 
            *menor = *(vet+i);
        }
        i++;
    }

}

void lerVetor(int *v, int tam){
    for(int i = 0; i < tam; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", (v + i));
    }
}

void printVetor(int *v, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf("%d, ", *(v + i));
    }
    printf("\b\b]");
}

int main(){
    int vet[TAM];

    lerVetor(vet, TAM);
    printVetor(vet, TAM);

    int maior, menor;

    apontaExtremos(vet, TAM, &maior, &menor);

    printf("\nMaior: %d\nMenor: %d", maior, menor);

    return 0;
}