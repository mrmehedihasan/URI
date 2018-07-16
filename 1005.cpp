#include <stdio.h>
 
int main() {
 
    float x,y;
    scanf("%f %f", &x,&y);
    float m = (3.5*x+7.5*y)/(7.5+3.5);
    printf("MEDIA = %.5f\n",m);
 
    return 0;
}
