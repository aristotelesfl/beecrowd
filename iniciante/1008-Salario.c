#include<stdio.h>

int main(void){
    int a, b;
    float c, mult;
    scanf("%d %d %f", &a, &b, &c);
    mult = b*c;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", mult);
}
