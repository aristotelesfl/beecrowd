#include <stdio.h>

int main(void){
    int notas[] = {100, 50, 20, 10, 5, 2, 1}, n, i=0;
    scanf("%d", &n);
    printf("%d\n", n);
    while(i < 7){
        int c = 0;
        while (n>=notas[i]){
            n -= notas[i];
            c++;
        }
        printf("%d nota(s) de R$ %d,00\n", c, notas[i]);
        i++;
    }
}
