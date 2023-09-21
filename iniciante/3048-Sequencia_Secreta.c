#include <stdio.h>

int main(void){
    int N, V[500], cont=0;
    scanf("%d", &N);
    for (int i=1; i<=N; i++){
        scanf("%d", &V[i]);
    }
    for (int i=1; i<=N; i++){
        if (V[i] != V[i+1]){
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
