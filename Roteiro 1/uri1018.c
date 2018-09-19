#include <stdio.h>

int main(){

    int num100, num50, num20, num10, num5, num2, num1;
    int cur;

    int n;
    scanf("%d", &n);

    cur = n;

    num100 = cur/100;
	cur = cur-num100*100;
	num50 = cur/50;
	cur = cur-num50*50;
	num20 = cur/20;
	cur = cur-num20*20;
	num10 = cur/10;
	cur = cur-num10*10;
	num5 = cur/5;
	cur = cur-num5*5;
	num2 = cur/2;
	cur = cur-num2*2;
	num1 = cur;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", num100);
    printf("%d nota(s) de R$ 50,00\n", num50);
    printf("%d nota(s) de R$ 20,00\n", num20);
    printf("%d nota(s) de R$ 10,00\n", num10);
    printf("%d nota(s) de R$ 5,00\n", num5);
    printf("%d nota(s) de R$ 2,00\n", num2);
    printf("%d nota(s) de R$ 1,00\n", num1);

    return 0;
}
