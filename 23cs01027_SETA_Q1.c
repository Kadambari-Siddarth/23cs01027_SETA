#include <stdio.h>
#define pi 3.14

int main(){
    float r;
    printf("Enter the value of r: ");
    scanf("%f", &r);
    float v = 4.0 * pi * r * r * r/3;
    printf("Volume: %.2f\n",v);
    float surface = 4 * pi * r * r;
    printf("Surface Area: %.2f\n", surface);
    return 0;
}