#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main(void){
    double a, b, c, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%lf %lf %lf", &a, &b, &c);
    TRIANGULO = (a*c)/2;
    CIRCULO = pow(c, 2)*pi;
    TRAPEZIO = ((a+b)*c)/2;
    QUADRADO = pow(b, 2);
    RETANGULO = a*b;
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);

}
