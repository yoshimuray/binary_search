#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int i;
    int j = 0;
    for(i = 0; i < n; i++){
        if(j > k){
            return 0;
        }else{
            if(A[i] % m == 0) j = j + (A[i] / m);
            else j = j + 1 + (A[i] / m);
            //printf("j = %d\n", j);
        }
    }
    if(j > k) return 0;
    else return 1;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = A[n - 1];
    while(ub - lb > 1){
        int m = (ub + lb) / 2;
        if(p(m)){
            ub = m;
            //printf("ub = %d\n", ub);
        }else{
            lb = m;
            //printf("lb = %d\n", lb);
        }
    }
    printf("%d\n", ub);
    return 0;
}
