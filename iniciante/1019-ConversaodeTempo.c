#include <stdio.h>
#include <math.h>

int main()
{
    int H, M, S, iquant;
    double N, quant;
    scanf("%lf", &N);
    
       quant = N/(pow(60, 2));
       iquant = quant;
       H = iquant;
       M = (quant - H)*60;
       S = round((((quant - H)*60)-M)*60);
       printf("%d:%d:%d\n", H, M, S);
       return 0;
}
