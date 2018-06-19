#include <stdio.h>

int n;
int k;
int A[100000];


int binary_search(int B[], int x, int l, int u){
    int lb = l;
    int ub = u;
    while(ub - lb > 1){
        int m = (ub + lb) / 2;
        if(B[m] >= x) ub = m;
        else lb = m;
    }
    printf("%d\n",ub);
    return ub;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    ub = n;
    lb = -1;
    
    binary_search(A, k, lb, ub);
    
  return 0;
}

