#include<stdio.h>

int main(void){
    double a, b, c, MEDIA;
    scanf("%lf %lf %lf", &a, &b, &c);
    MEDIA = (a*2 + b*3 + c*5)/10;
    printf("MEDIA = %.1lf\n", MEDIA);
}
