#include <stdio.h>
#include <stdlib.h>

int cmp (const void* a, const void* b){
    return -( *(int*)a - *(int*)b);
}

int main(){

    int i, j, num; //aux
    int n, m; //rows, cols

    scanf("%d %d", &n, &m);

    int* row_sum = (int *)calloc(n, sizeof(int));
    int* col_sum = (int *)calloc(m, sizeof(int));

    for(i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            scanf("%d", &num);
            col_sum[j] += num;
            row_sum[i] += num;
        }
    }

    qsort(row_sum, n, sizeof(int), cmp);
    qsort(col_sum, m, sizeof(int), cmp);

    if(row_sum[0] > col_sum[0]){
        printf("%d\n", row_sum[0]);
    }
    else{
        printf("%d\n", col_sum[0]);
    }

    free(row_sum);
    free(col_sum);

    return 0;
}
