#include<stdio.h>

int main(void){
    char nome[10];
    double b, c;
    fgets(nome, sizeof(nome), stdin);
    scanf("%lf %lf", &b, &c);
    b += c*0.15;
    printf("TOTAL = R$ %.2lf\n", b);
}
