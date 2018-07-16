#include <stdio.h>

int main(){
    double a,b,c;
    double t,cq,tra,sq,re;
    scanf("%lf %lf %lf", &a, &b,&c);
    t = .5*a*c;
    cq = 3.14159*c*c;
    tra = .5*(a+b)*c;
    sq = b*b;
    re = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",t,cq,tra,sq,re);
    return 0;
}
