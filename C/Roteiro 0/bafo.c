#include <stdio.h>

int main(){

  int r, i, a, b, sumA, sumB;
  int t = 0;

  while(1){
    scanf("%d", &r);
    if (r == 0){
      break;
    }
    sumA = 0;
    sumB = 0;
    ++t;
    for(i = 0; i < r; ++i){
      scanf("%d %d", &a, &b);
      sumA += a;
      sumB += b;
    }
    if(sumA > sumB){
      printf("Teste %d\nAldo\n", t);
    }
    else printf("Teste %d\nBeto\n", t);
  }

  return 0;
}
