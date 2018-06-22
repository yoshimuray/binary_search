#include <stdio.h>

int n;
int k;
int A[100000];

int p(int Ap[], int kp, int np, int mp){
    
    int i,j;
    j = 0;
    int am = Ap[mp];
    
    while(j < kp){
        for(i = 0; i < np; i++){
        while(Ap[i] > 0){
            Ap[i] = Ap[i] - am;
            j = j + 1;
            printf("%d\n", j);
        }}
        return 1;
    }
    return 0;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    
    lb = -1;
    ub = n;
    while(ub - lb > 1){
        int m = (ub + lb) / 2;
        if(p(A, k, n, m)) ub = m;
        else lb = m;
        printf("c = %d/n", );
    }

    printf("%d\n", A[ub]);
  return 0;
}
