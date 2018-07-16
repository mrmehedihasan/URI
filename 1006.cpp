#include <stdio.h>
 
int main() {
 
    float x,y,z;
    scanf("%f %f %f", &x,&y,&z);
    float m = (2*x+3*y+5*z)/(2+3+5);
    printf("MEDIA = %.1f\n",m);
    return 0;
}
