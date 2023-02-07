#include <stdio.h>

//long long To_Hop(int n, int k){
//    if (k==0 || k==n) return 1;
//    else
//        return To_Hop(n-1, k-1)+ To_Hop(n-1, k);
//}

long long To_Hop(int n, int k){
    long long res=1;
    for (int i=1; i<=k; i++,n--){
        res = (res*n)/i;
    }
    return res;
}
void tam_giac_pascal(int k){
    int a[100][100];
    for (int i=0; i<k; ++i){
        for (int j=0; j<=i ; ++j){
            if (j==0 || j==k) a[i][j]=1;
            else a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf("%d ",a[i][j]);
                
        }
        printf("\n");
    }
}

int main(int argc, const char * argv[]) {
    int n,k;
    
    scanf("%d %d", &n, &k);
    printf("%lld \n", To_Hop(n, k));
    int x;
    printf("tam giac pascal co bao nhieu hang?: ");
    scanf("%d", &x);
    tam_giac_pascal(x);
}
