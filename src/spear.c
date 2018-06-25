#include <stdio.h>

int n;
int k;
int A[100000];


int p(int m){
    
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = -1;
    ub = A[n - 1];
    while(ub - lb > 1){
        int m = (ub + lb) / 2;
        if(p(m)){
            ub = m;
            printf("ub = %d\n", ub);
        }else{
            lb = m;
            printf("lb = %d\n", lb);
        }
    }
    printf("%d\n", ub);

  return 0;
}
