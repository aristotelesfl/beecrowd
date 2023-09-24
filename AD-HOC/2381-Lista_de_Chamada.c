#include <stdio.h>
#include <string.h>

int main()
{
    int N, K, r;
    char nome[100][100], aux[100];
    scanf("%d %d", &N, &K);
    for (int i=0; i<N; i++){
        scanf("%s", nome[i]);
    }
    
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            r = strcmp(nome[i], nome[j]);
            if (r>0){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }
    
    puts(nome[K-1]);
    return 0;
    
}
