#include <stdio.h>
#include <math.h>

int main(){

    double n;
    int test = 1;

    while(1){

        scanf("%lf", &n);
        if (n == 0){
            break;
        }

        printf("Teste %d\n", test);
        double res = pow(2,n)-1;
        printf("%.lf\n\n", res);

        test++;
    }

    return 0;
}
