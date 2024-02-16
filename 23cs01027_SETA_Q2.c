#include <stdio.h>

int main(){
    int n;
    printf("Enter the integer you want to check: ");
    scanf("%d", &n);
    
    int fact[10];
    fact[0] = 1;
    int i = 1;
    while(i<10){
        fact[i] = fact[i-1] * i;
        i++;
    }
    int sum = 0;
    int x = n;
    while(n>0){
        sum += fact[n%10];
        n /= 10;
    }
    
    if(sum != x){
        printf("Not a strong number\n");
    }
    else{
        printf("It is a strong number");
    }
    return 0;
}