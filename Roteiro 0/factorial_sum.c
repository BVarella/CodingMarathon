#include <stdio.h>

unsigned long long int factorial(unsigned long long int a){

    if(a == 0){
        return 1;
    }

    unsigned long long int i;
    for (i = a-1; i > 0; i--){
        a *= i;
    }
    return a;
}

int main(){

    unsigned long long int m, n;

    while (1) {
        scanf("%llu %llu", &m, &n);
        if (feof(stdin)){
            break;
        }
        printf("%llu\n", factorial(m)+factorial(n));
    }

    return 0;
}
