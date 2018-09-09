#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, i, temp;
  int acc = 0;

  scanf("%d", &n);

  for(i = 0; i < n; ++i){
    scanf("%d", &temp);
    acc += temp;
  }

  printf("%d\n", acc);

  return 0;
}
teste
