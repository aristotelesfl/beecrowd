#include <stdio.h>
#include <string.h>

int main()
{
    int n, c;
    scanf("%d", &n);
    scanf("%*[^\n]"); scanf("%*c");
    for (int i=0; i<n; i++){
        char entrada[1000], saida[1000];
        scanf("%[^\n]", entrada);
        scanf("%*[^\n]"); scanf("%*c");
        c = strlen(entrada);
        for (int j=0; j<strlen(entrada); j++){
            if(65<=entrada[j] && entrada[j]<=122){
                entrada[j]+=3;
            }
            c--;
            saida[c]=entrada[j];
            if (c<=j){
                saida[j]-=1;
            }
        }
        
        for (int j=0; j<strlen(entrada); j++){
            printf("%c", saida[j]);
        }
        printf("\n");
    }
        
    return 0;
}
