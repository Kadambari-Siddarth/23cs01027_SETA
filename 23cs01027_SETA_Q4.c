#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int prime[n];
    prime[0] = 2;
    int size = 1;
    int j;
    //initializing all the primes;
    for(int i = 3;i < n ; ++i){
        for( j = size-1;j >= 0;--j){
            if(i % prime[j] == 0){
                break;  
            }
        }
        if(j<0){
            prime[size] = i;
            size++;
        }
    }
    int I, N_I; 
    for(int i = 1;i < n/2 ; ++i){
        I=0;
        N_I = 0;
        //checking if i and n-i are primes?
        for(int j = 0;j < size; ++j){
            if(prime[j] == i){
                I=1;
                break;
            }
        }
        for(int j=0; j < size; ++j){
            if(prime[j] == n-i){
                N_I=1;
                break;
            }
        }
        if(I == 1 && N_I == 1){
            printf("%d %d\n", i, n-i);
            // return 0;
        }
    }
    if(I == 0)
        printf("Not possible\n");
    return 0;
}