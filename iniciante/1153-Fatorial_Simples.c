#include <stdio.h>

int main(void){
    int N, fat=0;
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        if (i==0) fat = N;
        else fat *= N-i;
    }
    printf("%d\n", fat);
    return 0;
}
