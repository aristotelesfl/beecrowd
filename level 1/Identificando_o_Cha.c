#include <stdio.h>

int main(void){
    int T, A, B, C, D, E, cont=0;
    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    if (A==T) cont++;
    if (B==T) cont++;
    if (C==T) cont++;
    if (D==T) cont++;
    if (E==T) cont++;
    printf("%d\n", cont);
    return 0;
}
