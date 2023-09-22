#include<stdio.h>

#define pi 3.14159

int main(void){
    double raio, area;
    scanf("%lf", &raio);
    area = pi*raio*raio;
    printf("A=%.4lf\n", area);
}
