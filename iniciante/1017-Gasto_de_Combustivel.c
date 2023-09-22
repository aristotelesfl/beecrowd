#include<stdio.h>
#include<math.h>
#define cons 12

int main(void){
    int v, t;
    double s, cons_n;
    scanf("%d %d", &v, &t);
    s = v*t;
    cons_n = s/cons;
    printf("%.3lf\n", cons_n);

}
