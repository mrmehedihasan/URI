#include <stdio.h>
#define PI 3.14159
int main(){
    double r,t;
    scanf("%lf", &r);
    t = (4/3.0)*PI*r*r*r;
    printf("VOLUME = %.3lf\n",t);
    return 0;
}
