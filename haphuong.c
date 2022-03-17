#include<stdio.h>
#define MAX 100
int M[MAX][MAX];
int C(int k, int n){
    if(k == 0 || k ==n) return 1;
    if(M[k][n] != 0) return M[k][n];
    else{
        M[k][n] = C(k, n-1) + C(k-1, n-1);
        return M[k][n];
    }
    
}

int main() {
    int m, n, tohop;
    scanf("%d %d", &m, &n);
    tohop = C(m-1, m+n-2);
    printf("%d", tohop);
    return 0;
}
