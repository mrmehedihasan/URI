#include <stdio.h>

int main(){

    int pid, q;
    int pid0, q0;
    float p,p0, total;
    scanf("%d %d %f", &pid, &q, &p);
    scanf("%d %d %f", &pid0, &q0, &p0);
    total = q*p+q0*p0;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
