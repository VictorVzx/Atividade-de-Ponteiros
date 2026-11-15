#include <stdio.h>

int main(){
    int v[3] = {2, 4, 6}, *p, *q;
    int a = 7, b = 12;
    p = v + 2;
    *p = a + b;
    *(p - 2) = *p - a;
    //Linha 1
    q = p - 1;
    *q = p[-2] + 1;
    //Linha 2
    *(q - 1) = q[0] + *(p - 2);
    *(q++) = *--p + 2;
    //Linha 3
    *p = ++(*q) - 2;
    q[-1] = *(p - 1) + *p;
    (*p)++;
    //Linha 4
    printf("v[0]=%d, v[1]=%d, v[2]=%d\n", v[0], v[1], v[2]);
    return 0;
}