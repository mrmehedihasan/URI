#include <stdio.h>

int main(){
    char name[100];
    float fs,bs,total;
    scanf("%s %f %f", &name, &fs, &bs);
    total = ((15*bs)/100)+fs;
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}
