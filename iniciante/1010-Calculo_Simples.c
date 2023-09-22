#include<stdio.h>

int main(void){
    int cod1, cod2, num1, num2;
    double val1, val2, sum;
    scanf("%d %d %lf", &cod1, &num1, &val1);
    scanf("%d %d %lf", &cod2, &num2, &val2);
    sum = num1*val1 + num2*val2;
    printf("VALOR A PAGAR: R$ %.2lf\n", sum);
}
