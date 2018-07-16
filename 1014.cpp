#include <stdio.h>

int main(){
    int k;
    float f,a;
    scanf("%d %f", &k,&f);
    a = (float)k/f;
    printf("%.3f km/l\n",a);
    return 0;

}
