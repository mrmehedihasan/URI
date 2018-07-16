#include <stdio.h>

int main(){
    int h, a;
    float x;
    scanf("%d %d", &h, &a);
    x = (float)(h*a)/12;
    printf("%.3f\n",x);
    return 0;
}
