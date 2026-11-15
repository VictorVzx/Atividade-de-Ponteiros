#include <stdio.h>

void calcularMdcMmc(int a, int b, int c, int *mmc, int *mdc){
    int resto;
    while(c != 0){
        resto = a % b % c;
        a = b;
        b = c;
        c = resto;
    }

    *mdc = resto;
}

// nao resolvida

int main(){
    

    return 0;
}