#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    printf("Enter the values of a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    float disc = (b * b) - (4 * a * c);
    printf("a: %f, b: %f, c: %f\n", a, b, c);
    printf("disc: %f\n", disc);
    if(disc < 0){
        printf("Imaginary Roots\n");
    }
    else if(disc == 0)
        printf("Both are equal to: %f\n", -b/(2*a));
    else{
        printf("Root 1: %f\n", (-b + pow(disc, 0.5))/(2*a));
        printf("Root 2: %f\n", (-b - pow(disc, 0.5))/(2 * a));
    }
    return 0;
}